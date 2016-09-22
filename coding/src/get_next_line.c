/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 14:16:40 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:48:10 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

static int	line_memory_alloc(char **line, int const buff_len, int *init_len)
{
	char	*new_memory;

	if (*line == NULL)
	{
		*line = ft_strnew(buff_len);
		if (*line == NULL)
			return (-1);
		*init_len = 0;
	}
	else
	{
		*init_len = ft_strlen(*line);
		new_memory = ft_strnew(*init_len + buff_len);
		if (new_memory == NULL)
			return (-1);
		ft_strcpy(new_memory, *line);
		ft_strdel(line);
		*line = new_memory;
	}
	return (1);
}

static int	copy_buff_to_line(char const *buff, char **line, int const buff_len)
{
	int		index;
	int		init_len;

	if (line_memory_alloc(line, buff_len, &init_len) == -1)
		return (-1);
	index = 0;
	while (index < buff_len)
	{
		(*line)[init_len + index] = buff[index];
		index++;
	}
	return (1);
}

static void	reset_buff(char *buff, int const buff_len, int const eol_bool)
{
	int		index;

	index = 0;
	while (buff[buff_len + eol_bool + index] != '\0')
	{
		buff[index] = buff[buff_len + eol_bool + index];
		index++;
	}
	while (buff[index] != '\0')
	{
		buff[index] = '\0';
		index++;
	}
}

static int	get_that_line(int const fd, char **line, char *buff)
{
	int		buff_len;
	int		eol_bool;

	if (*buff == '\0')
	{
		if (read(fd, buff, BUFF_SIZE) == 0)
			return (0);
		return (get_that_line(fd, line, buff));
	}
	else
	{
		eol_bool = 0;
		buff_len = 0;
		while (buff[buff_len] != '\n' && buff[buff_len] != '\0')
			buff_len++;
		if (buff[buff_len] == '\n')
			eol_bool = 1;
		if (copy_buff_to_line(buff, line, buff_len) == -1)
			return (-1);
		reset_buff(buff, buff_len, eol_bool);
		if (eol_bool == 1)
			return (1);
		else
			return (get_that_line(fd, line, buff));
	}
}

int			get_next_line(int const fd, char **line)
{
	static char	buff[BUFF_SIZE];

	*line = NULL;
	return (get_that_line(fd, line, buff));
}
