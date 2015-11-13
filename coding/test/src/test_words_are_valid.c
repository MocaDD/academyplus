/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_words_are_valid.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:32:42 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:32:54 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_words_are_valid(int fd)
{
	if (words_are_valid("Ion3; Cucu?;ic@gmail.com;7;Timis;", 42) != 0)
	{
		ft_putendl_fd("words_are_valid               test 1 failed!", fd);
		return ;
	}
	if (words_are_valid("Ion; Cucu;ic@.com;7;Timis;", 42) != 0)
	{
		ft_putendl_fd("words_are_valid               test 2 failed!", fd);
		return ;
	}
	if (words_are_valid("Ion; Cucu;ic@gmail.com;10.2;Timis;", 42) != 0)
	{
		ft_putendl_fd("words_are_valid               test 3 failed!", fd);
		return ;
	}
	if (words_are_valid("Ion; Cucu;ic@gmail.com;7;Timisoara;", 42) != 0)
	{
		ft_putendl_fd("words_are_valid               test 4 failed!", fd);
		return ;
	}
	if (words_are_valid("Ion; Cucu;ic@gmail.com;7.5;Timis;", 42) != 1)
	{
		ft_putendl_fd("words_are_valid               test 5 failed!", fd);
		return ;
	}
	ft_putendl_fd("words_are_valid               OK", fd);
}
