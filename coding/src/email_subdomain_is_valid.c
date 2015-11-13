/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   email_subdomain_is_valid.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:32:30 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:10:11 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		email_subdomain_is_valid(char *subdomain, int line_number)
{
	log_string("starting validation for email subdomain: ", subdomain);
	if (string_is_not_empty(subdomain, line_number,
				"Domain in email is empty.") == 0)
	{
		log_simple("email subdomain validation ended unsuccesfully");
		return (0);
	}
	if (string_is_alphabetic(subdomain, line_number,
				"Domain in email has non-alphabetic characters") == 0)
	{
		log_simple("email subdomain validation ended unsuccesfully");
		return (0);
	}
	log_simple("email subdomain validation ended succesfully");
	return (1);
}
