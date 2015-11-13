/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_line_is_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:25:55 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:26:13 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_line_is_valid(int fd)
{
	if (line_is_valid("nelu;compot;nc@gml.ro;5;Cluj;;", 42) != 0)
	{
		ft_putendl_fd("line_is_valid                 test 1 failed!", fd);
		return ;
	}
	if (line_is_valid("nelu7;compot.;@gml.ro;5;Cluj;", 42) != 0)
	{
		ft_putendl_fd("line_is_valid                 test 2 failed!", fd);
		return ;
	}
	if (line_is_valid("nelu;compot;nc@gml.ro;5;Cluj;", 42) != 1)
	{
		ft_putendl_fd("line_is_valid                 test 3 failed!", fd);
		return ;
	}
	ft_putendl_fd("line_is_valid                 OK", fd);
}
