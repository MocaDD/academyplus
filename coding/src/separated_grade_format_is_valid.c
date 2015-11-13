/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separated_grade_format_is_valid.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:24:02 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:45:05 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		separated_grade_format_is_valid(char *grade, int line_number)
{
	int		before_dot;
	int		after_dot;

	log_string("starting separated grade format validation: ", grade);
	before_dot = ft_atoi(grade);
	if (ft_strlen(ft_strchr(grade, '.') + 1) > 2)
	{
		log_simple("separated grade format validation ended unsuccesfully");
		print_error_message("Too many digits after '.'", line_number);
		return (0);
	}
	after_dot = ft_atoi(ft_strchr(grade, '.') + 1);
	if (before_dot > 10 || (before_dot == 10 && after_dot > 0))
	{
		log_simple("separated grade format validation ended unsuccesfully");
		print_error_message("Grade is not in the 0-10 range.", line_number);
		return (0);
	}
	log_simple("separated grade format validation ended succesfully");
	return (1);
}
