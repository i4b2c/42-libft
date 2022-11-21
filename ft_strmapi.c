/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 11:22:38 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/17 11:43:40 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	if (!s || !f)
		return (NULL);
	i = 0;
	p = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (!p)
		return (NULL);
	while (s[i])
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = 0;
	return (p);
}
/*
char	teste(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c);
	else
		if (c >= 'a' && c <= 'z')
			return (c - 32);
		else if (c >= 'A' && c <= 'Z')
			return (c + 32);
	return (0);
}

int main(void)
{
	char str[] = "boas";
	char *p;
	p = ft_strmapi(str,teste);
	printf("%s",p);
	return 0;
}*/
