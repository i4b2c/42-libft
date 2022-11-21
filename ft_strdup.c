/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:26:55 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/14 13:27:03 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	unsigned int	i;
	unsigned int	len;
	char			*p;

	len = ft_strlen((char *)s);
	p = malloc(len + 1 * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = *s;
		i++;
		s++;
	}
	p[i] = '\0';
	return (p);
}
/*
int main(void)
{
	char str[20] = "boas";
	char *p;
	p = ft_strdup(str);
	printf("depois :%s\n",p);
	return 0;
}*/
