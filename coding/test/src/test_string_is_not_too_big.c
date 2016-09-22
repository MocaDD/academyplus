/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string_is_not_too_big.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:32:22 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:32:33 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_string_is_not_too_big(int fd)
{
	if (string_is_not_too_big("abcd", 4, 42, "just testing") != 1)
	{
		ft_putendl_fd("string_is_not_too_big         test 1 failed!", fd);
		return ;
	}
	if (string_is_not_too_big("abcd", 3, 42, "just testing") != 0)
	{
		ft_putendl_fd("string_is_not_too_big         test 1 failed!", fd);
		return ;
	}
	ft_putendl_fd("string_is_not_too_big         OK", fd);
}
