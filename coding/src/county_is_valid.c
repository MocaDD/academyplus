/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   county_is_valid.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 11:17:57 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:28:41 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		county_is_valid(char *county, int line_number)
{
	log_string("starting county validation: ", county);
	if (string_is_not_empty(county, line_number, "County is empty.") == 0)
		return (0);
	if (string_is_not_too_big(county, COUNTY_MAX_LENGTH, line_number,
				"County is too big.") == 0)
		return (0);
	if (county_exists(county, line_number, "County doesn't exist.") == 0)
		return (0);
	log_string("county validation ended succesfully: ", county);
	return (1);
}
