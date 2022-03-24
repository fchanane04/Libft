/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 21:32:39 by fchanane          #+#    #+#             */
/*   Updated: 2021/11/27 22:55:41 by fchanane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*element;
	t_list	*newlist;

	newlist = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		element = ft_lstnew(f(lst->content));
		if (!element)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&newlist, element);
	}
	return (newlist);
}
