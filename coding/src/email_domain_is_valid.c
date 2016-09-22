/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   email_domain_is_valid.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:31:49 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:34:05 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		email_domain_is_valid(char *domain, int line_number)
{
	char	*dot;

	log_string("starting validation for email domain part: ", domain);
	if ((dot = string_has_one_char_of(domain, '.')) == NULL)
	{
		print_error_message("Invalid '.' in the domain part of the email.",
				line_number);
		log_simple("email domain part validation ended unsuccesfully");
		return (0);
	}
	if (email_subdomain_is_valid(ft_strsub(domain,
					0, dot - domain), line_number) == 0)
	{
		log_simple("email domain part validation ended unsuccesfully");
		return (0);
	}
	if (email_subdomain_is_valid(ft_strsub(domain, dot - domain + 1, domain
					+ ft_strlen(domain) - dot + 1), line_number) == 0)
	{
		log_simple("email domain part validation ended unsuccesfully");
		return (0);
	}
	log_simple("email domain part validation ended succesfully");
	return (1);
}
