/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_line_has_columns.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:25:37 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:25:47 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_line_has_columns(int fd)
{
	if (line_has_columns("a;b;c;;de;", 5, 42) != 1)
	{
		ft_putendl_fd("line_has_columns              test 1 failed!", fd);
		return ;
	}
	if (line_has_columns("a;b;c;de;", 6, 42) != 0)
	{
		ft_putendl_fd("line_has_columns              test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("line_has_columns              OK", fd);
}
