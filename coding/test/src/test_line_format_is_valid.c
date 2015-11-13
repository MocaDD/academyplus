/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_line_format_is_valid.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:24:43 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:25:09 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_line_format_is_valid(int fd)
{
	if (line_format_is_valid("", 42) != 0)
	{
		ft_putendl_fd("line_format_is_valid          test 1 failed!", fd);
		return ;
	}
	if (line_format_is_valid(";;;;;;", 42) != 0)
	{
		ft_putendl_fd("line_format_is_valid          test 2 failed!", fd);
		return ;
	}
	if (line_format_is_valid(";;;;;a", 42) != 0)
	{
		ft_putendl_fd("line_format_is_valid          test 3 failed!", fd);
		return ;
	}
	if (line_format_is_valid(";;;;;", 42) != 1)
	{
		ft_putendl_fd("line_format_is_valid          test 4 failed!", fd);
		return ;
	}
	ft_putendl_fd("line_format_is_valid          OK", fd);
}
