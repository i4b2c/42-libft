/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:50:24 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/14 13:29:36 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (0);
	ft_bzero(p, nmemb * size);
	return (p);
}
/*
int main(void)
{
	char *p = "boasasas";
	printf("antes: %s\n",p);
	p = ft_calloc(8,1);
	printf("depois: %s",p);
	return 0;
}*/
