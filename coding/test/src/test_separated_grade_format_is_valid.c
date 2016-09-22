/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_separated_grade_format_is_valid.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 17:28:06 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 17:28:38 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_program.h"

void	test_separated_grade_format_is_valid(int fd)
{
		if (separated_grade_format_is_valid("8.456", 42) != 0)
		{
				ft_putendl_fd("separated_grade_format_is_v.  test 1 failed!", fd);
				return ;
		}
		if (separated_grade_format_is_valid("10.45", 42) != 0)
		{
				ft_putendl_fd("separated_grade_format_is_v.  test 2 failed!", fd);
				return ;
		}
		if (separated_grade_format_is_valid("9.45", 42) != 1)
		{
				ft_putendl_fd("separated_grade_format_is_v.  test 3 failed!", fd);
				return ;
		}
		ft_putendl_fd("separated_grade_format_is_v.  OK", fd);
}
