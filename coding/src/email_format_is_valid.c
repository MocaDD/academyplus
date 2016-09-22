/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   email_format_is_valid.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 15:52:18 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:34:19 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		email_format_is_valid(char *email, int line_number)
{
	char	*arond;

	log_string("starting email format validation: ", email);
	if ((arond = string_has_one_char_of(email, '@')) == NULL)
	{
		log_simple("email format validation ended unsuccesfully");
		print_error_message("Invalid arond in email.", line_number);
		return (0);
	}
	if (email_local_part_is_valid(ft_strsub(email, 0, arond - email),
				line_number) == 0)
	{
		log_simple("email format validation ended unsuccesfully");
		return (0);
	}
	if (email_domain_is_valid(ft_strsub(email, arond - email + 1,
					email + ft_strlen(email) - arond + 1), line_number) == 0)
	{
		log_simple("email format validation ended unsuccesfully");
		return (0);
	}
	log_simple("email format validation ended succesfully");
	return (1);
}
