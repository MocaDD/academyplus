/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/23 21:41:30 by dmoca             #+#    #+#             */
/*   Updated: 2015/10/23 21:48:29 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*temp;

	i = 0;
	temp = NULL;
	while (s[i])
	{
		if (s[i] == c)
			temp = s + i;
		i++;
	}
	if (s[i] == c)
		return ((char*)(s + i));
	return ((char*)temp);
}
