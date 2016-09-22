/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converting_stage.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 17:54:28 by dmoca             #+#    #+#             */
/*   Updated: 2016/02/09 19:16:20 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

char	*convert_based_on_flags(t_mod *data, va_list *arg, int *size)
{
	char	*text;

	text = NULL;
	text = ft_memalloc(1000);
	edit_based_on_mods(data, arg);
	text = ft_strdup(data->result);
	return (text);
}
