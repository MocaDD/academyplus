/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string_is_alphabetic.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:31:23 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:31:47 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_string_is_alphabetic(int fd)
{
	if (string_is_alphabetic("ab5d", 42, "just testing") != 0)
	{
		ft_putendl_fd("string_is_alphabetic          test 1 failed!", fd);
		return ;
	}
	if (string_is_alphabetic("abcd", 42, "just testing") != 1)
	{
		ft_putendl_fd("string_is_alphabetic          test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("string_is_alphabetic          OK", fd);
}
