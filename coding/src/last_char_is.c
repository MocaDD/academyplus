/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_char_is.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:33:33 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:40:14 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		last_char_is(char *string, char character)
{
	int		index;

	log_string("verifying if last char from string is specific: ", string);
	index = ft_strlen(string) - 1;
	while (index > 0 && ft_isblank(string[index]))
		index--;
	if (string[index] != character)
	{
		log_simple("last char from string is not the desired one");
		return (0);
	}
	log_simple("last char from string is the desired one");
	return (1);
}
