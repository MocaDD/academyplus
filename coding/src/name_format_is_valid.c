/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   name_format_is_valid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:34:35 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:44:40 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		name_format_is_valid(char *name, int line_number)
{
	int		index;

	log_string("verifying name format: ", name);
	index = 0;
	while (name[index] != '\0')
	{
		if (!ft_isalpha(name[index]) && !ft_isblank(name[index]))
		{
			log_simple("name format verification ended unsuccesfully");
			print_error_message("Invalid character in name.", line_number);
			return (0);
		}
		index++;
	}
	log_simple("name format verification ended succesfully");
	return (1);
}
