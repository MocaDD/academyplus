/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_email_format_is_valid.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:18:36 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:16:38 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_email_format_is_valid(int fd)
{
	if (email_format_is_valid("compotgmail.com", 42) != 0)
	{
		ft_putendl_fd("email_format_is_valid         test 1 failed!", fd);
		return ;
	}
	if (email_format_is_valid("com pot@gmail.com", 42) != 0)
	{
		ft_putendl_fd("email_format_is_valid         test 2 failed!", fd);
		return ;
	}  
	if (email_format_is_valid("com pot@gmailcom", 42) != 0)
	{
		ft_putendl_fd("email_format_is_valid         test 3 failed!", fd);
		return ;
	}  
	if (email_format_is_valid("compot@gmail.com", 42) != 1)
	{
		ft_putendl_fd("email_format_is_valid         test 4 failed!", fd);
		return ;
	} 
	ft_putendl_fd("email_format_is_valid         OK", fd);
}
