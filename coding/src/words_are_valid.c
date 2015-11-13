/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   words_are_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:35:57 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:46:01 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		words_are_valid(char *line, int line_number)
{
	log_int("starting words validation for line: ", line_number);
	if (names_are_valid(line, line_number) == 0)
	{
		log_simple("words validation ended unsuccesfully");
		return (0);
	}
	if (email_is_valid(get_word_number(line, 3), line_number) == 0)
	{
		log_simple("words validation ended unsuccesfully");
		return (0);
	}
	if (grade_is_valid(get_word_number(line, 4), line_number) == 0)
	{
		log_simple("words validation ended unsuccesfully");
		return (0);
	}
	if (county_is_valid(get_word_number(line, 5), line_number) == 0)
	{
		log_simple("words validation ended unsuccesfully");
		return (0);
	}
	return (1);
	log_simple("words validation ended succesfully");
}
