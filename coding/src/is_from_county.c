/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_from_county.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 16:03:46 by jfazakas          #+#    #+#             */
/*   Updated: 2015/11/06 16:38:37 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "good_coding_practices.h"

int		is_from_county(char *line, char *county)
{
	log_string("verifying if student is from county: ", county);
	if (ft_strequ(county, ft_strupcase(get_word_number(line, 5))) == 1)
	{
		log_string("student is not from the county: ", county);
		return (1);
	}
	log_string("student is not from the county: ", county);
	return (0);
}
