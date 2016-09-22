/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 20:58:38 by dmoca             #+#    #+#             */
/*   Updated: 2015/11/08 12:42:20 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*new;
	size_t			i;

	if (size == 0)
		return (NULL);
	new = NULL;
	new = (unsigned char*)malloc(size);
	if (new)
	{
		i = 0;
		while (size--)
			new[i++] = 0;
	}
	return ((void*)new);
}
