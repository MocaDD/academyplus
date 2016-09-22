/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 17:43:33 by dmoca             #+#    #+#             */
/*   Updated: 2016/02/09 19:08:55 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	process_flags(char *choped, t_mod *data)
{
	init_flags(data);
	data->choped = choped;
	process_specifiers(choped, data);
}
