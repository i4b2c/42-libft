/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:20:11 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/17 12:47:03 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		x;
	int		temp;
	char	*p;

	if (!s1)
		return (NULL);
	if (!s2)
		return ((char *)s1);
	x = ft_strlen((char *)s1);
	temp = ft_strlen((char *)s2);
	p = malloc(x + temp + 1 * sizeof(char));
	if (!p)
		return (NULL);
	i = 0;
	while (x > i)
		p[i++] = *s1++;
	i = 0;
	while (temp > i)
		p[x + i++] = *s2++;
	p[x + i] = '\0';
	return (p);
}
/*
int main(void)
{
	char str[] = "boas";
	char str2[] = "";
	char *p;
	p = ft_strjoin(str,str2);
	printf("%s",p);
	return (0);
}*/
