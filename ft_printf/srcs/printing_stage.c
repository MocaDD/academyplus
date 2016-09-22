/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printing_stage.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 17:26:35 by dmoca             #+#    #+#             */
/*   Updated: 2016/02/09 19:11:04 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int		not_wide(t_mod *data)
{
	if (data->specifier == 'S' || data->specifier == 'C')
		return (1);
	else if (data->hh_mod == 1 && data->specifier == 'C')
		return (1);
	else if (data->l_mod == 1 && (data->specifier == 's' || \
				data->specifier == 'c'))
		return (1);
	return (0);
}

int		no_procent(const char *format)
{
	if (ft_strchr(format, '%') == NULL)
	{
		ft_putstr(format);
		return (1);
	}
	return (0);
}

int		how_much_to_print(char *text, t_mod *data)
{
	int		len;

	len = 0;
	if (!not_wide(data))
	{
		ft_putstr(text);
		len = ft_strlen(data->result);
	}
	free (data->result);
	return (len);
}
