/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_count_char_in_string.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:14:48 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:13:39 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_count_char_in_string(int fd)
{
	if (count_char_in_string("abcd;xyz;", ';') != 2)
	{
		ft_putendl_fd("count_char_in_string          test 1 failed!", fd);
		return ;
	}
	if (count_char_in_string("abcd;xyz;", 'x') != 1)
	{
		ft_putendl_fd("count_char_in_string          test 2 failed!", fd);
		return ;
	}
	if (count_char_in_string("abcd;xyz;", 'f') != 0)
	{
		ft_putendl_fd("count_char_in_string          test 3 failed!", fd);
		return ;
	}
	ft_putendl_fd("count_char_in_string          OK", fd);
}
