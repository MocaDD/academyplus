/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_string_has_one_char_of.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 12:01:27 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:31:11 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_string_has_one_char_of(int fd)
{
	char	*string;

	string = ft_strnew(4);
	string[0] = 'a';
	string[1] = 'b';
	string[2] = 'c';
	string[3] = 'a';
	if (string_has_one_char_of(string, 'a') != NULL)
	{
		ft_putendl_fd("string_has_one_char_of       test 1 failed!", fd);        
		return ;
	}
	if (string_has_one_char_of(string, 'c') != (string + 2))
	{
		ft_putendl_fd("string_has_one_char_of       test 2 failed!", fd);        
		return ;
	}
	if (string_has_one_char_of(string, 'x') != NULL)
	{
		ft_putendl_fd("string_has_one_char_of       test 2 failed!", fd);        
		return ;
	}
}
