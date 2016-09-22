/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_is_valid.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:34:48 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:44:32 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		name_is_valid(char *name, int line_number)
{
	log_string("starting validation for name: ", name);
	if (string_is_not_empty(name, line_number, "Empty name.") == 0)
	{
		log_simple("name validation ended unsuccesfully");
		return (0);
	}
	if (string_is_not_too_big(name, NAME_MAX_LENGTH,
				line_number, "Name is too big.") == 0)
	{
		log_simple("name validation ended unsuccesfully");
		return (0);
	}
	if (name_format_is_valid(name, line_number) == 0)
	{
		log_simple("name validation ended unsuccesfully");
		return (0);
	}
	log_simple("name validation ended succesfully");
	return (1);
}
