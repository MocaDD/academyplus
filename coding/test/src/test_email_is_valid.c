/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_email_is_valid.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:19:09 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:19:22 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_email_is_valid(int fd)
{
	if (email_is_valid("", 42) != 0)
	{
		ft_putendl_fd("email_is_valid                test 1 failed!", fd);
		return ;
	}
	if (email_is_valid("compotgeorgevasilemarcelcartofi@gmail.com", 42) != 0)
	{
		ft_putendl_fd("email_is_valid                test 2 failed!", fd);
		return ;
	}
	if (email_is_valid("compot@.com", 42) != 0)
	{
		ft_putendl_fd("email_is_valid                test 3 failed!", fd);
		return ;
	}
	if (email_is_valid("compot@gmail.com", 42) != 1)
	{
		ft_putendl_fd("email_is_valid                test 4 failed!", fd);
		return ;
	}
	ft_putendl_fd("email_is_valid                OK", fd);
}
