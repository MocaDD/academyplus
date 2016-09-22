/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_has_grades_over.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:22:22 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:23:22 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_has_grades_over(int fd)
{
	if (has_grades_over(";;;7;;", 8) != 0)
	{
		ft_putendl_fd("has_grades_over               test 1 failed!", fd);
		return ;
	}
	if (has_grades_over(";;;8;;", 8) != 1)
	{
		ft_putendl_fd("has_grades_over               test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("has_grades_over               OK", fd);
}
