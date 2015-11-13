/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_simple_grade_format_is_valid.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:28:44 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:29:03 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_simple_grade_format_is_valid(int fd)
{
	if (simple_grade_format_is_valid("11", 42) != 0)
	{
		ft_putendl_fd("simple_grade_format_is_v.     test 1 failed!", fd);
		return ;
	}
	if (simple_grade_format_is_valid("10", 42) != 1)
	{
		ft_putendl_fd("simple_grade_format_is_v.     test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("simple_grade_format_is_v.     OK", fd);
}
