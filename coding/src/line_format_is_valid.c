/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_format_is_valid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:34:02 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:06:14 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		line_format_is_valid(char *line, int line_number)
{
	log_int("starting line format validation for line: ", line_number);
	if (string_is_not_empty(line, line_number, "Empty line.") == 0)
	{
		log_int("line format validation ended unsuccesfully: ", line_number);
		return (0);
	}
	if (line_has_columns(line, 5, line_number) == 0)
	{
		log_int("line format validation ended unsuccesfully: ", line_number);
		return (0);
	}
	if (line_ends_with_semicolon(line, line_number) == 0)
	{
		log_int("line format validation ended unsuccesfully: ", line_number);
		return (0);
	}
	log_int("line format validation ended succesfully: ", line_number);
	return (1);
}
