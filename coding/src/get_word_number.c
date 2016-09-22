/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_word_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:36:26 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:47:20 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

char	*get_word_number(char *line, int column)
{
	int		begin;
	int		end;

	log_string("searching specific word in line: ", line);
	begin = 0;
	while (column > 1)
	{
		if (line[begin] == ';')
			column--;
		begin++;
	}
	end = begin;
	while (line[end] != ';')
		end++;
	log_simple("word found");
	return (ft_strtrim(ft_strsub(line, begin, end - begin)));
}
