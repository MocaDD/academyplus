/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfazakas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/21 17:54:28 by jfazakas          #+#    #+#             */
/*   Updated: 2015/10/31 17:35:45 by jfazakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	while (dlen + i + 1 < size && src[i] != '\0')
	{
		*(unsigned char*)(dst + dlen + i) = *(unsigned char*)(src + i);
		i++;
	}
	*(unsigned char*)(dst + dlen + i) = '\0';
	if (size < dlen)
		return (size + slen);
	else
		return (slen + dlen);
}
