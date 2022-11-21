/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:46:03 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 15:57:00 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = 0;
	while (*str != (char)c && i < n - 1)
	{
		str++;
		i++;
	}
	if (*str == (char)c)
		return ((char *)str);
	return (0);
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
