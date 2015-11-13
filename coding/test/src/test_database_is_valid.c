/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_database_is_valid.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:17:15 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:16:11 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

static void	close_files(int fd_1, int fd_2)
{
	close(fd_1);
	close(fd_2);
}

void		test_database_is_valid(int fd)
{
	int		fd_1;
	int		fd_2;

	fd_1 = open("test/good.csv", O_RDONLY);
	fd_2 = open("test/bad.csv", O_RDONLY);
	if (database_is_valid(fd_1) != 1)
	{
		ft_putendl_fd("database_is_valid             test 1 failed!", fd);
		close_files(fd_1, fd_2);
		return ;
	}
	if (database_is_valid(fd_2) != 0)
	{
		ft_putendl_fd("database_is_valid             test 1 failed!", fd);
		close_files(fd_1, fd_2);
		return ;
	}
	close_files(fd_1, fd_2);
	ft_putendl_fd("database_is_valid             OK", fd);
}
