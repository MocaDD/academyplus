/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   has_grades_over.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:26:55 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:37:28 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		has_grades_over(char *line, int grade)
{
	log_int("verifying if student has grades over: ", grade);
	if (ft_atoi(get_word_number(line, 4)) >= grade)
	{
		log_int("student has grades over: ", grade);
		return (1);
	}
	log_int("student doesn't have grades over: ", grade);
	return (0);
}
