/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_county_is_valid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:16:44 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:15:57 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_county_is_valid(int fd)
{
	if (county_is_valid("", 42) != 0)
	{
		ft_putendl_fd("county_is_valid               test 1 failed!", fd);
		return ;
	}
	if (county_is_valid("BISTRITA_NASAUDDDDD", 42) != 0)
	{
		ft_putendl_fd("county_is_valid               test 2 failed!", fd);
		return ;
	}
	if (county_is_valid("DEJ", 42) != 0)
	{
		ft_putendl_fd("county_is_valid               test 3 failed!", fd);
		return ;
	}
	if (county_is_valid("CLUJ", 42) != 1)
	{
		ft_putendl_fd("county_is_valid               test 4 failed!", fd);
		return ;
	}
	ft_putendl_fd("county_is_valid               OK", fd);
}
