/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:45:25 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/17 13:21:22 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if ((int)start > ft_strlen((char *)s))
	{
		p = malloc(sizeof(char) * 1);
		if (!p)
			return (0);
		*p = '\0';
		return (p);
	}
	p = malloc(len + 1 * sizeof(char));
	if (!p)
		return (0);
	while (len-- > 0 && (int)start < ft_strlen((char *)s))
		p[i++] = s[start++];
	p[i] = '\0';
	return (p);
}
/*
int main(void)
{
	char *p;
	p = ft_substr("juro te rei",4,3);
	printf("%s",p);
	return 0;
}*/
