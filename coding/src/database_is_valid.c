/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   database_is_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:30:58 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:33:53 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		database_is_valid(int fd)
{
	char	*line;
	int		line_number;

	log_simple("starting database validation");
	line_number = 0;
	while (get_next_line(fd, &line) > 0)
	{
		line_number++;
		if (line_is_valid(line, line_number) == 0)
		{
			log_simple("database validation finished unsuccesfully");
			return (0);
		}
	}
	log_simple("database validation complete");
	return (1);
}
