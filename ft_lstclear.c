/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 12:56:30 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/18 13:30:09 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp_ad;
	t_list	*temp;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp)
	{
		temp_ad = temp->next;
		ft_lstdelone(temp, del);
		temp = temp_ad;
	}
	*lst = NULL;
}
