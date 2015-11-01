/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/01 13:07:26 by dmoca             #+#    #+#             */
/*   Updated: 2015/11/01 13:50:53 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ndigit(int n, int i)
{
	char *str;

	if (!(str = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	str[i] = '\0';
	i--;
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i] = (n % 10) + '0';
		i--;
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
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
