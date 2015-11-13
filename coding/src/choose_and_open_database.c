/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_and_open_database.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:30:50 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:33:40 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		choose_and_open_database(int *fd, int ac, char **av)
{
	log_int("choosing database to open. arguments: ", ac);
	if (ac == 2)
	{
		if (open_file(fd, av[1]) == -1)
		{
			log_string("could not open database: ", av[1]);
			return (-1);
		}
	}
	else
	{
		if (open_file(fd, STANDARD_CSV) == -1)
		{
			log_string("could not open database: ", STANDARD_CSV);
			return (-1);
		}
	}
	log_simple("succesfully opened database");
	return (1);
}
