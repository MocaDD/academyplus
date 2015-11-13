/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_int.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 14:47:21 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 14:47:24 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

void	log_int(char *message, int number)
{
	int		fd;

	fd = open(LOG_FILE, O_RDWR | O_APPEND);
	ft_putstr_fd(message, fd);
	ft_putnbr_fd(number, fd);
	ft_putchar_fd('\n', fd);
	close(fd);
}
