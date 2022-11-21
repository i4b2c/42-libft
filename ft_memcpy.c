/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:20:00 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/10 14:51:15 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*str1;
	const char	*str2;

	str1 = dest;
	str2 = src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (str1);
}
/*
int main(void)
{
	char str[] = "boas";
	char str1[] = "ok";
	char *p;
	p = ft_memcpy(&str,&str1,2);
	printf("%s",p);
	return 0;
}*/
