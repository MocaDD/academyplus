/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grade_is_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 11:19:10 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:27:41 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		grade_is_valid(char *grade, int line_number)
{
	log_string("starting grade validation: ", grade);
	if (string_is_not_empty(grade, line_number, "Empty grade.") == 0)
	{
		log_simple("grade_validation ended unsuccesfully");
		return (0);
	}
	if (string_is_not_too_big(grade, NAME_MAX_LENGTH,
				line_number, "Grade is too long") == 0)
	{
		log_simple("grade_validation ended unsuccesfully");
		return (0);
	}
	if (grade_format_is_valid(grade, line_number) == 0)
	{
		log_simple("grade_validation ended unsuccesfully");
		return (0);
	}
	log_simple("grade_validation ended succesfully");
	return (1);
}
