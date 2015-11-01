/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 22:00:53 by dmoca             #+#    #+#             */
/*   Updated: 2015/10/24 22:08:11 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char	v[10];
	int		i;
	long	num;

	i = 0;
	num = n;
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num == 0)
		ft_putchar('0');
	while (num > 0)
	{
		v[i] = num % 10 + '0';
		i++;
		num = num / 10;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(v[i]);
		i--;
	}
}
