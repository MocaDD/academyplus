/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_email_domain_is_valid.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:17:58 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:16:23 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_email_domain_is_valid(int fd)
{
	if (email_domain_is_valid("gmail..com", 42) != 0)
	{
		ft_putendl_fd("email_domain_is_valid         test 1 failed!", fd);
		return ;
	}
	if (email_domain_is_valid("gma il.com", 42) != 0)
	{
		ft_putendl_fd("email_domain_is_valid         test 2 failed!", fd);
		return ;
	}
	if (email_domain_is_valid("gma il.com", 42) != 0)
	{
		ft_putendl_fd("email_domain_is_valid         test 3 failed!", fd);
		return ;
	}
	if (email_domain_is_valid("gmail.com", 42) != 1)
	{
		ft_putendl_fd("email_domain_is_valid         test 4 failed!", fd);
		return ;
	}
	ft_putendl_fd("email_domain_is_valid         OK", fd);
}
