/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   email_is_valid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:32:08 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:34:59 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		email_is_valid(char *email, int line_number)
{
	log_string("starting validation for email ", email);
	if (string_is_not_empty(email, line_number, "Empty email.") == 0)
	{
		log_simple("email validation ended unsuccesfully");
		return (0);
	}
	if (string_is_not_too_big(email, EMAIL_MAX_LENGTH,
				line_number, "Email is too big.") == 0)
	{
		log_simple("email validation ended unsuccesfully");
		return (0);
	}
	if (email_format_is_valid(email, line_number) == 0)
	{
		log_simple("email validation ended unsuccesfully");
		return (0);
	}
	log_simple("email validation ended succesfully");
	return (1);
}
