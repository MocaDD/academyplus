/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 20:55:23 by dmoca             #+#    #+#             */
/*   Updated: 2015/11/12 21:04:57 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(new) * (content_size))))
		return (NULL);
	if (content)
	{
		new->content = (void*)content;
		new->content_size = content_size;
		new->next = NULL;
	}
	else
	{
		new->content = 0;
		new->content_size = 0;
		new->next = NULL;
	}
	return (new);
}
