/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_county_exists.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:15:56 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:14:41 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_county_exists(int fd)
{
	if (county_exists("CLUJ", 42, "just_testing") != 1)
	{
		ft_putendl_fd("county_exists                 test 1 failed!", fd);
		return ;
	}
	if (county_exists("braSOV", 42, "just_testing") != 1)
	{
		ft_putendl_fd("county_exists                 test 2 failed!", fd);
		return ;
	}
	if (county_exists("DEJ", 42, "just_testing") != 0)
	{
		ft_putendl_fd("county_exists                 test 3 failed!", fd);
		return ;
	}
	ft_putendl_fd("county_exists                 OK", fd);
}
