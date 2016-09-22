/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_line_ends_with_semicolon.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:24:21 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:24:33 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_line_ends_with_semicolon(int fd)
{
	if (line_ends_with_semicolon("abc", 42) != 0)
	{
		ft_putendl_fd("line_ends_with_semicolon      test 1 failed!", fd);
		return ;
	}
	if (line_ends_with_semicolon("abc;  ", 42) != 1)
	{
		ft_putendl_fd("line_ends_with_semicolon      test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("line_ends_with_semicolon      OK", fd);
}
