/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:28:52 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:31:55 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		main(int ac, char **av)
{
	int		fd;
	char	*line;

	log_simple("starting program.");
	if (choose_and_open_database(&fd, ac, av) == -1)
	{
		log_simple("ending program. could not open database.");
		return (0);
	}
	if (database_is_valid(fd) == 0)
	{
		log_simple("ending program. database invalid.");
		return (0);
	}
	go_to_the_file_start(fd);
	while (get_next_line(fd, &line) > 0)
	{
		if (has_grades_over(line, 8) && is_from_county(line, "CLUJ"))
			print_student_name(line);
	}
	close(fd);
	log_simple("ending succesful program.");
	return (0);
}
