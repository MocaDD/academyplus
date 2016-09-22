/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_char_in_string.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:30:01 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:32:11 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		count_char_in_string(char *string, char character)
{
	int		index;
	int		count;

	log_string("counting specific chars in string: ", string);
	count = 0;
	index = 0;
	while (string[index] != '\0')
	{
		if (string[index] == character)
			count++;
		index++;
	}
	log_int("counted chars: ", count);
	return (count);
}
