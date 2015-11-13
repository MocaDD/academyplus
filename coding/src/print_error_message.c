/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error_message.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:36:18 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:46:12 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

void	print_error_message(char *message, int line_number)
{
	log_string("printing error message: ", message);
	ft_putstr("Database error on line ");
	ft_putnbr(line_number);
	ft_putstr(". ");
	ft_putendl(message);
}
