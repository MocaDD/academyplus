/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_is_not_empty.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:35:41 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:45:38 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		string_is_not_empty(char *string, int line_number, char *error_message)
{
	log_string("verifying if string is empty: ", string);
	if (ft_strlen(ft_strtrim(ft_strdup(string))) == 0)
	{
		log_string("string found empty: ", string);
		print_error_message(error_message, line_number);
		return (0);
	}
	log_string("string found not empty: ", string);
	return (1);
}
