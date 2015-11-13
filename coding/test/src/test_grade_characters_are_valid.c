/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_grade_characters_are_valid.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:21:02 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:21:14 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_grade_characters_are_valid(int fd)
{
	if (grade_characters_are_valid("-1,2", 42) != 0)
	{
		ft_putendl_fd("grade_characters_are_valid    test 1 failed!", fd);
		return ;
	}
	if (grade_characters_are_valid("8.2", 42) != 1)
	{
		ft_putendl_fd("grade_characters_are_valid    test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("grade_characters_are_valid    OK", fd);
}
