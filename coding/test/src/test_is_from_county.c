/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_from_county.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:23:26 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:23:42 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_is_from_county(int fd)
{
	if (is_from_county(";;;;CLUJ;", "BRASOV") != 0)
	{
		ft_putendl_fd("is_from_county                test 1 failed!", fd);
		return ;
	}
	if (is_from_county(";;;;brasov;", "BRASOV") != 1)
	{
		ft_putendl_fd("is_from_county                test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("is_from_county                OK", fd);
}
