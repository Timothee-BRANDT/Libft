/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrandt <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:50:04 by tbrandt           #+#    #+#             */
/*   Updated: 2021/10/29 14:48:15 by tbrandt          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	
	if (!lst)
		return (NULL);
	new_list = malloc(sizeof(t_list));
	while (lst)
	{
		new_list->content = f(lst->content);
		del(lst->content);
		lst = lst->next;
		ft_lstdelone(lst, del);
	}
	return (new_list);
}
