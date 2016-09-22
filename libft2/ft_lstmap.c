/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoca <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/13 18:45:56 by dmoca             #+#    #+#             */
/*   Updated: 2015/11/13 20:28:21 by dmoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*ft_new(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content)
	{
		if (!(node->content = (void*)malloc(sizeof(content_size))))
			return (NULL);
		ft_memcpy(node->content, content, content_size);
	}
	node->content_size = content_size;
	node->next = 0;
	return (node);
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*t;
	t_list	*head;
	t_list	*temp;
	t_list	*n_list;

	if (lst == NULL)
		return (NULL);
	t = (*f)(lst);
	if (!(head = ft_new(t->content, t->content_size)))
		return (NULL);
	temp = head;
	lst = lst->next;
	while (lst)
	{
		t = (*f)(lst);
		if (!(n_list = ft_new(t->content, t->content_size)))
			return (NULL);
		temp->next = n_list;
		temp = n_list;
		n_list->next = 0;
		lst = lst->next;
	}
	return (head);
}
