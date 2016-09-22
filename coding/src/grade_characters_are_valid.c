/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grade_characters_are_valid.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 14:23:56 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 11:39:28 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		grade_characters_are_valid(char *grade, int line_number)
{
	int		index;

	index = 0;
	while (grade[index] != '\0')
	{
		if (!ft_isdigit(grade[index]) && grade[index] != '.')
		{
			print_error_message("Only digits and dots accepted in grade.",
					line_number);
			return (0);
		}
		index++;
	}
	return (1);
}
