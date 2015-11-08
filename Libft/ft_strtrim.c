/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/08 11:31:54 by dmoca             #+#    #+#             */
/*   Updated: 2015/11/08 11:41:07 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (s)
	{
		i = 0;
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		j = (int)ft_strlen(s) - 1;
		while (s[j] == ' ' || s[j] == '\t' || s[j] == '\n')
			j--;
		if (!(str = (char*)malloc(sizeof(char) * j + 1)))
			return (NULL);
		k = 0;
		while (i <= j)
			str[k++] = s[i++];
		str[k] = '\0';
		return (str);
	}
	return (NULL);
}
