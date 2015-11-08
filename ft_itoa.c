/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 13:07:26 by dmoca             #+#    #+#             */
/*   Updated: 2015/11/08 12:46:12 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_ndigit(int n, int i)
{
	char			*str;
	unsigned int	nb;

	if (!(str = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	str[i] = '\0';
	i--;
	nb = n;
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[i] = (nb % 10) + '0';
		i--;
		nb = nb / 10;
	}
	return (str);
}

char			*ft_itoa(int n)
{
	int nbr;
	int i;

	if (n < 0)
	{
		nbr = -n;
		i = 1;
	}
	if (n > 0)
	{
		nbr = n;
		i = 0;
	}
	if (n == 0)
		i = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (ft_ndigit(n, i));
}
