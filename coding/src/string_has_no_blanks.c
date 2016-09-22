/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_has_no_blanks.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:35:21 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:45:20 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		string_has_no_blanks(char *string, int line_number, char *error_message)
{
	log_string("verifying if string has no blank spaces: ", string);
	if (count_char_in_string(string, ' ') != 0 ||
			count_char_in_string(string, '\t') != 0)
	{
		log_simple("blank spaces test ended unsuccesfully");
		print_error_message(error_message, line_number);
		return (0);
	}
	log_simple("blank spaces test ended succesfully");
	return (1);
}
