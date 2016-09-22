/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grade_format_is_valid.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 11:24:49 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:05:52 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		grade_format_is_valid(char *grade, int line_number)
{
	int		dots;

	log_string("starting grade format validation: ", grade);
	dots = count_char_in_string(grade, '.');
	if (grade_characters_are_valid(grade, line_number) == 0)
	{
		log_simple("grade format validation ended unsuccesfully");
		return (0);
	}
	if ((dots == 0 && simple_grade_format_is_valid(grade, line_number) == 0) ||
			(dots == 1 && separated_grade_format_is_valid(grade,
				line_number) == 0))
	{
		log_simple("grade format validation ended unsuccesfully");
		return (0);
	}
	if (dots > 1)
	{
		log_simple("grade format validation ended unsuccesfully");
		print_error_message("Grade has more than one '.'", line_number);
		return (0);
	}
	log_simple("grade_format_validation ended succesfully");
	return (1);
}
