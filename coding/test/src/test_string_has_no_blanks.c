/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string_has_no_blanks.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:29:13 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:30:42 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_string_has_no_blanks(int fd)
{
	if (string_has_no_blanks("abc", 42, "just testing") != 1)
	{
		ft_putendl_fd("string_has_no_blanks          test 1 failed!", fd);
		return ;
	}
	if (string_has_no_blanks("a c", 42, "just testing") != 0)
	{
		ft_putendl_fd("string_has_no_blanks          test 2 failed!", fd);
		return ;
	}
	ft_putendl_fd("string_has_no_blanks          OK", fd);
}
