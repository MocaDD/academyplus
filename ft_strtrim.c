/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 18:54:41 by dmoca             #+#    #+#             */
/*   Updated: 2015/11/01 10:09:22 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		first;
	int		last;
	int		i;
	char	*str;

	i = 0;
	last = ft_strlen(s);
	last--;
	while (s[last] == ' ' || s[last] == '\t' || s[last] == '\n')
		last--;
	first = 0;
	while (s[first] == ' ' || s[first] == '\t' || s[first] == '\n')
		first++;
	if (!(str = (char*)malloc(sizeof(char) * (last - first) + 2)))
		return (NULL);
	while (i <= last - first)
	{
		str[i] = s[first + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
