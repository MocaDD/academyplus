/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/24 21:18:12 by dmoca             #+#    #+#             */
/*   Updated: 2015/10/24 21:40:16 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	v[10];
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb == 0)
		ft_putchar_fd('0', fd);
	while (nb > 0)
	{
		v[i] = nb % 10 + '0';
		i++;
		nb = nb / 10;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar_fd(v[i], fd);
		i--;
	}
}
