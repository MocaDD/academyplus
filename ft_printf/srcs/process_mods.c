/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_mods.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 17:45:29 by dmoca             #+#    #+#             */
/*   Updated: 2016/02/09 19:09:06 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

void	init_flags(t_mod *flag)
{
	flag->dot_mod = 0;
	flag->h_mod = 0;
	flag->hh_mod = 0;
	flag->l_mod = 0;
	flag->ll_mod = 0;
	flag->z_mod = 0;
	flag->j_mod = 0;
	flag->hash_mod = 0;
	flag->minus_mod = 0;
	flag->zero_mod = 0;
	flag->plus_mod = 0;
	flag->space_mod = 0;
	flag->width = 0;
	flag->specifier = 48;
	flag->precision = 0;
	flag->procent = 0;
	flag->wild_width = 0;
	flag->wild_precision = 0;
	flag->wld_psize = 0;
	flag->wld_wsize = 0;
	init_flags2(flag);
}
