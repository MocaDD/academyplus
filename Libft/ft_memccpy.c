/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 18:29:48 by dmoca             #+#    #+#             */
/*   Updated: 2015/10/23 18:47:15 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	elem;

	i = 0;
	while (i < n)
	{
		elem = *((unsigned char *)src + i);
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
		if (elem == (unsigned char)c)
			return (dst + i);
	}
	return (NULL);
}
