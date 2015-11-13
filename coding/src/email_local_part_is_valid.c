/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   email_local_part_is_valid.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 15:51:57 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 15:55:21 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		email_local_part_is_valid(char *local_part, int line_number)
{
	log_string("starting validation for email local part: ", local_part);
	if (string_is_not_empty(local_part, line_number,
				"Email local part is empty.") == 0)
	{
		log_simple("email local part validation ended unsuccesfully");
		return (0);
	}
	if (string_has_no_blanks(local_part, line_number,
				"Email local part has spaces.") == 0)
	{
		log_simple("email local part validation ended unsuccesfully");
		return (0);
	}
	log_simple("email local part validation ended succesfully");
	return (1);
}
