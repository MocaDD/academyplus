/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converting_no_mod.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 17:56:35 by dmoca             #+#    #+#             */
/*   Updated: 2016/02/09 19:16:18 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	no_case(t_mod *data, va_list *arg)
{
	int			decimal;

	if (data->specifier == 'd')
	{
		decimal = va_arg(*arg, int);
		data->result = ft_itoa(decimal);
	}
}

void	edit_based_on_mods(t_mod *data, va_list *arg)
{
	no_case(data, arg);
}
