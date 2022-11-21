/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:19:56 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/10 16:10:15 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	i;
	size_t	x;

	if (!*l)
		return ((char *)b);
	if (len == 0)
		return (NULL);
	i = 0;
	while (len > i && b[i] != '\0')
	{
		x = 0;
		while (b[i + x] != 0 && b[i + x] == l[x] && (i + x) < len && l[x] != 0)
		{
			if (l[x + 1] == 0)
				return ((char *)&b[i]);
			x++;
		}
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("%s",ft_strnstr("lorem ipsum dolor sit amet", "dolor", 25));
	return 0;
}*/
