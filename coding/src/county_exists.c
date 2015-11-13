/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   county_exists.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/06 11:30:11 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:33:34 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		county_exists(char *county, int line_number, char *error_message)
{
	int		fd;
	int		county_boolean;
	char	*line;

	log_string("starting search for the county: ", county);
	open_file(&fd, COUNTY_LIST);
	county_boolean = 0;
	while (get_next_line(fd, &line) > 0)
	{
		if (ft_strcmp(ft_strlowcase(strdup(line)),
					ft_strlowcase(ft_strdup(county))) == 0)
			county_boolean = 1;
	}
	if (county_boolean == 0)
	{
		log_string("county doesn't exist: ", county);
		print_error_message(error_message, line_number);
	}
	else
		log_string("county exists: ", county);
	close(fd);
	return (county_boolean);
}
