/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_is_alphabetic.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:35:28 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:45:29 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		string_is_alphabetic(char *string, int line_number, char *error_message)
{
	int		index;

	log_string("verifying if string is alphabetic: ", string);
	index = 0;
	while (string[index] != '\0')
	{
		if (!ft_isalpha(string[index]))
		{
			log_simple("verifying if string is alphabetic ended unsuccesfully");
			print_error_message(error_message, line_number);
			return (0);
		}
		index++;
	}
	log_simple("verifying if string is alphabetic ended succesfully");
	return (1);
}
