/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_name_is_valid.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:27:14 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:27:30 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_name_is_valid(int fd)
{
	if (name_is_valid("", 42) != 0)
	{
		ft_putendl_fd("name_is_valid                 test 1 failed!", fd);
		return ;
	}
	if (name_is_valid("Abcdefghijabcdefghijabcdefghijabcdefghij", 42) != 0)
	{
		ft_putendl_fd("name_is_valid                 test 2 failed!", fd);
		return ;
	}
	if (name_is_valid("42", 42) != 0)
	{
		ft_putendl_fd("name_is_valid                 test 3 failed!", fd);
		return ;
	}
	if (name_is_valid("Vasile", 42) != 1)
	{
		ft_putendl_fd("name_is_valid                 test 4 failed!", fd);
		return ;
	}
	ft_putendl_fd("name_is_valid                 OK", fd);
}
