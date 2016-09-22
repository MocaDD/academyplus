/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 19:14:55 by dmoca             #+#    #+#             */
/*   Updated: 2015/10/24 19:32:02 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int num;
	int nul;

	num = 0;
	nul = 1;
	while (*str == '\r' || *str == '\n' || *str == '\t' || *str == '\f'
			|| *str == ' ' || *str == '\v')
		str++;
	if (*str == '-')
	{
		str++;
		nul = -1;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		num = (num * 10) + (*str - 48);
		str++;
	}
	return (num * nul);
}
