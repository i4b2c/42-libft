/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:12:51 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/18 12:31:31 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new_nd;

	if (!lst || !f || !del)
		return (NULL);
	temp = ft_lstnew(f(lst->content));
	if (!temp)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		new_nd = ft_lstnew(f(lst->content));
		if (!new_nd)
		{
			ft_lstclear(&temp, del);
			return (0);
		}
		ft_lstadd_back(&temp, new_nd);
		lst = lst->next;
	}
	return (temp);
}
