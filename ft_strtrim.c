/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:29:21 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/18 12:19:00 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set,*s1) && *s1)
		s1++;
	len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len]) && len)
		len--;
	return (ft_substr(s1, 0, len + 1));
}
/*
int main(void)
{
	char str[] = "olaaaoa";
	char *p;
	p = ft_strtrim(str,NULL);
	printf("%s",p);
	return 0;
}*/
