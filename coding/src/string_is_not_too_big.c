/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_is_not_too_big.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:35:50 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:40:06 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		string_is_not_too_big(char *string, int max_length, int line_number,
		char *error_message)
{
	log_string("verifying if string is not too big", string);
	if (ft_strlen(string) > (unsigned int)max_length)
	{
		print_error_message(error_message, line_number);
		log_simple("string is too long");
		return (0);
	}
	log_simple("length verification ended succesgully");
	return (1);
}
