/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:46:03 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/21 14:23:01 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	const char idk[] = "akeno himejima";
	const char idk1[] = "akeno himejima";
	char *idk2;
	char *idk3;
	idk3 = ft_memchr(idk1, 'e', 2);
	idk2 = memchr(idk, 'e', 2);
	printf("%s\n",idk2);
	printf("%s\n",idk3);
	return 0;
}*/
