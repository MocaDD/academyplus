/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   log_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 14:47:31 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 14:50:30 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

void	log_string(char *message, char *string)
{
	int		fd;

	fd = open(LOG_FILE, O_RDWR | O_APPEND);
	ft_putstr_fd(message, fd);
	ft_putendl_fd(string, fd);
	close(fd);
}
