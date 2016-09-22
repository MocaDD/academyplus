/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_grade_format_is_valid.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 11:41:22 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:45:11 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		simple_grade_format_is_valid(char *grade, int line_number)
{
	int		grade_int;

	log_string("starting simple grade format validation: ", grade);
	grade_int = ft_atoi(grade);
	if (grade_int < 0 || grade_int > 10)
	{
		log_simple("simple grade format validation ended unsuccesfully");
		print_error_message("Grade is not in the 0-10 range.", line_number);
		return (0);
	}
	log_simple("simple grade format validation ended succesfully");
	return (1);
}
