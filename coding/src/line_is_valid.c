/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_is_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:34:24 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:44:22 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		line_is_valid(char *line, int line_number)
{
	log_int("starting validation for line: ", line_number);
	if (line_format_is_valid(line, line_number) == 0)
	{
		log_int("validation ended unsuccesfully for line: ", line_number);
		return (0);
	}
	if (words_are_valid(line, line_number) == 0)
	{
		log_int("validation ended unsuccesfully for line: ", line_number);
		return (0);
	}
	log_int("validation ended succesfully at line: ", line_number);
	return (1);
}
