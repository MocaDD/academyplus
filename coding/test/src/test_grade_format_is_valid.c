/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_grade_format_is_valid.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:21:21 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:21:48 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_grade_format_is_valid(int fd)
{
	if (grade_format_is_valid("8,54", 42) != 0)
	{
		ft_putendl_fd("grade_format_is_valid         test 1 failed!", fd);
		return ;
	}
	if (grade_format_is_valid("11", 42) != 0)
	{
		ft_putendl_fd("grade_format_is_valid         test 2 failed!", fd);
		return ;
	}
	if (grade_format_is_valid("10.25", 42) != 0)
	{
		ft_putendl_fd("grade_format_is_valid         test 3 failed!", fd);
		return ;
	}
	if (grade_format_is_valid("7..5", 42) != 0)
	{
		ft_putendl_fd("grade_format_is_valid         test 4 failed!", fd);
		return ;
	}
	if (grade_format_is_valid("7.25", 42) != 1)
	{
		ft_putendl_fd("grade_format_is_valid         test 5 failed!", fd);
		return ;
	}
	ft_putendl_fd("grade_format_is_valid         OK", fd);
}
