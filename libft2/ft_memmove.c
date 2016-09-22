/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 18:49:06 by dmoca             #+#    #+#             */
/*   Updated: 2015/10/23 19:09:10 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (void *)malloc(len);
	while (i < len)
	{
		*(tmp + i) = *((unsigned char *)src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*((unsigned char *)dst + i) = *(tmp + i);
		i++;
	}
	free(tmp);
	return (dst);
}
