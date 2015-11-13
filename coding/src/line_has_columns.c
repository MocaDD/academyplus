/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_has_columns.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:34:10 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:40:40 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		line_has_columns(char *line, int columns, int line_number)
{
	log_int("counting columns for line: ", line_number);
	if (count_char_in_string(line, ';') != columns)
	{
		log_string("incorrect number of columns found: ", line);
		print_error_message("Incorrect number of columns.", line_number);
		return (0);
	}
	log_int("counted columns: ", columns);
	return (1);
}
