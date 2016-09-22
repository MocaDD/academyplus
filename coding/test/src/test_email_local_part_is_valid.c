/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_email_local_part_is_valid.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:19:38 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:19:55 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_email_local_part_is_valid(int fd)
{
	if (email_local_part_is_valid("", 42) != 0)
	{
		ft_putendl_fd("email_local_part_is_valid     test 1 failed!", fd);
		return ;
	}
	if (email_local_part_is_valid("va ile", 42) != 0)
	{
		ft_putendl_fd("email_local_part_is_valid     test 2 failed!", fd);
		return ;
	}
	if (email_local_part_is_valid("vasile", 42) != 1)
	{
		ft_putendl_fd("email_local_part_is_valid     test 3 failed!", fd);
		return ;
	}
	ft_putendl_fd("email_local_part_is_valid     OK", fd);
}
