/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string_is_not_empty.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:31:57 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:13:18 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_string_is_not_empty(int fd)
{
	if (string_is_not_empty("", 42, "just testing") != 0)
	{
		ft_putendl_fd("string_is_not_empty           test 1 failed!", fd);
		return ;
	}
	if (string_is_not_empty("abc", 42, "just testing") != 1)
	{
		ft_putendl_fd("string_is_not_empty           test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("string_is_not_empty           OK", fd);
}
