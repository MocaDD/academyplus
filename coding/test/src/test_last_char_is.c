/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_last_char_is.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:23:49 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:24:11 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_last_char_is(int fd)
{
	if (last_char_is("abc  ", ';') != 0)
	{
		ft_putendl_fd("last_char_is                  test 1 failed!", fd);
		return ;
	}
	if (last_char_is("abc  ", 'c') != 1)
	{
		ft_putendl_fd("last_char_is                  test 1 failed!", fd);
		return ;
	}
	ft_putendl_fd("last_char_is                  OK", fd);
}
