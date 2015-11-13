/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_grade_is_valid.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:21:57 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:22:11 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_grade_is_valid(int fd)
{
	if (grade_is_valid("", 42) != 0)
	{
		ft_putendl_fd("grade_is_valid                test 1 failed!",fd);
		return ;
	}
	if (grade_is_valid("3.14159265", 42) != 0)
	{
		ft_putendl_fd("grade_is_valid                test 2 failed!",fd);
		return ;
	}
	if (grade_is_valid("5..5", 42) != 0)
	{
		ft_putendl_fd("grade_is_valid                test 3 failed!",fd);
		return ;
	}
	if (grade_is_valid("8.5", 42) != 1)
	{
		ft_putendl_fd("grade_is_valid                test 4 failed!",fd);
		return ;
	}
	ft_putendl_fd("grade_is_valid                OK",fd);
}
