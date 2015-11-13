/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_to_the_file_start.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 12:40:02 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 18:05:06 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

void	go_to_the_file_start(int fd)
{
	log_simple("going back to the start of the database");
	lseek(fd, 0, SEEK_SET);
}
