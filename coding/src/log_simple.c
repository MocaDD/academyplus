/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_simple.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 14:04:13 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:13:11 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

void	log_simple(char *message)
{
	int		fd;

	fd = open(LOG_FILE, O_RDWR | O_APPEND);
	ft_putendl_fd(message, fd);
	close(fd);
}
