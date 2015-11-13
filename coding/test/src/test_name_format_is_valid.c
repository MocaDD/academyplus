/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_name_format_is_valid.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:26:42 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:26:56 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_name_format_is_valid(int fd)
{
	if (name_format_is_valid("Vasile George", 42) != 1)
	{
		ft_putendl_fd("name_format_is_valid          test 1 failed!", fd);
		return ;
	}
	if (name_format_is_valid("Marcel7", 42) != 0)
	{
		ft_putendl_fd("name_format_is_valid          test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("name_format_is_valid          OK", fd);
}
