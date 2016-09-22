/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   names_are_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:34:56 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:44:57 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		names_are_valid(char *line, int line_number)
{
	log_int("starting validation for names in line: ", line_number);
	if (name_is_valid(get_word_number(line, 1), line_number) == 0)
	{
		log_simple("lastname validation ended unsuccesfully");
		return (0);
	}
	if (name_is_valid(get_word_number(line, 2), line_number) == 0)
	{
		log_simple("firstname validation ended unsuccesfully");
		return (0);
	}
	log_int("names validation enden succesfully on line: ", line_number);
	return (1);
}
