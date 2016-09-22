/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chop_format.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 17:32:42 by dmoca             #+#    #+#             */
/*   Updated: 2016/02/09 19:06:56 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int		is_specifier(const char *format, int *k)
{
	int		i;

	i = *k;
	if (ft_strchr(SPECIFIERS, format[i]) != NULL)
		return (1);
	return (0);
}

char	*chop_format(const char *format, unsigned long int *i)
{
	char	*choped;
	int		j;
	int		k;

	j = 0;
	k = *i;
	k++;
	choped = (char*)malloc(sizeof(choped) * ft_strlen(format));
	while (format[k])
	{
		if (is_specifier(format, &k))
		{
			choped[j++] = format[k];
			break ;
		}
		k++;
	}
	choped[j] = '\0';
	return (choped);
}

void	init_flags2(t_mod *flag)
{
	flag->chr = '0';
	flag->result = ft_memalloc(1000);
	flag->wstr = (wchar_t*)malloc(sizeof(wchar_t) * 200);
	flag->choped = ft_memalloc(20);
	flag->precizie = ft_memalloc(200);
	flag->lungime = ft_memalloc(200);
}
