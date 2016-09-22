/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_has_one_char_of.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:36:36 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:47:28 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

char	*string_has_one_char_of(char *string, char character)
{
	log_string("verifying if string has exactly one specific char: ", string);
	if (strchr(string, character) == strrchr(string, character))
		return (strchr(string, character));
	return (NULL);
}
