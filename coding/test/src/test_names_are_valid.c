/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_names_are_valid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:27:37 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:27:59 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_names_are_valid(int fd)
{
	if (names_are_valid("Marcel89;Gheoghe;;;;", 42) != 0)
	{
		ft_putendl_fd("names_are_valid               test 1 failed!", fd);
		return ;
	}
	if (names_are_valid(";Marcel;Gheor.ghe;;;", 42) != 0)
	{
		ft_putendl_fd("names_are_valid               test 2 failed!", fd);
		return ;
	}
	if (names_are_valid("Marcel;Gheorghe;;;;", 42) != 1)
	{
		ft_putendl_fd("names_are_valid               test 3 failed!", fd);
		return ;
	}
	ft_putendl_fd("names_are_valid               OK", fd);
}
