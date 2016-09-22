/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 20:25:16 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/31 17:28:01 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_numlen(int n)
{
	int		len;

	len = 0;
	if (n < 1)
	{
		if (n == -2147483648)
			return (11);
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void		ft_fill(char *s, int n, int len)
{
	while (len >= 0 && s[len] != '-')
	{
		if (n < 1)
		{
			if (n == -2147483648)
			{
				s[len] = '8';
				len--;
				n = -214748364;
			}
			n = n * (-1);
			s[0] = '-';
		}
		s[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
}

char			*ft_itoa(int n)
{
	char	*s;
	int		len;

	len = ft_numlen(n);
	s = ft_strnew(len);
	if (s == NULL)
		return (NULL);
	ft_fill(s, n, len - 1);
	return (s);
}
