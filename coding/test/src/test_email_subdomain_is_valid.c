/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_email_subdomain_is_valid.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:20:14 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:20:28 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_email_subdomain_is_valid(int fd)
{
	if (email_subdomain_is_valid("", 42) != 0)
	{
		ft_putendl_fd("email_subdomain_is_valid      test 1 failed!", fd);
		return ;
	}
	if (email_subdomain_is_valid("gmail5", 42) != 0)
	{
		ft_putendl_fd("email_subdomain_is_valid      test 2 failed!", fd);
		return ;
	}
	if (email_subdomain_is_valid("gmail", 42) != 1)
	{
		ft_putendl_fd("email_subdomain_is_valid      test 3 failed!", fd);
		return ;
	}
	ft_putendl_fd("email_subdomain_is_valid      OK", fd);
}
