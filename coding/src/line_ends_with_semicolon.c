/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_ends_with_semicolon.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:33:49 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:40:25 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		line_ends_with_semicolon(char *line, int line_number)
{
	log_string("verifying semicolon ending: ", line);
	if (last_char_is(line, ';') == 0)
	{
		log_simple("line doesn't end with semicolon");
		print_error_message("Line doesn't end with a \';\'.", line_number);
		return (0);
	}
	log_simple("line ends with semicolon");
	return (1);
}
