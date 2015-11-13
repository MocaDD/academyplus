/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:36:09 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:46:06 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		open_file(int *fd, char *filename)
{
	log_string("trying to open file: ", filename);
	*fd = open(filename, O_RDONLY);
	if (*fd == -1)
	{
		ft_putendl("Database not found");
		log_string("Open error(-1): ", filename);
		return (-1);
	}
	log_string("succesfully opened file: ", filename);
	return (1);
}
