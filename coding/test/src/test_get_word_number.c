/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_word_number.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:03:36 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:20:55 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_get_word_number(int fd)
{
	if (ft_strequ(get_word_number("abc;;;;;", 1), "abc") != 1)
	{
		ft_putendl_fd("get_word_number               test 1 failed!", fd);
		return ;
	}
	if (ft_strequ(get_word_number(";;xyz;;;", 3), "xyz") != 1)
	{
		ft_putendl_fd("get_word_number               test 1 failed!", fd);
		return ;
	}
	ft_putendl_fd("get_word_number               OK", fd);
}
