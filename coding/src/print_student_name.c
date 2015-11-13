/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_student_name.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 16:06:51 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:47:52 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

void	print_student_name(char *line)
{
	log_simple("printing student name");
	ft_putstr(get_word_number(line, 1));
	ft_putchar(' ');
	ft_putendl(get_word_number(line, 2));
}
