/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:11:35 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/10 14:30:25 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	if (n == 0 || n == i)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
{
	printf("%d",ft_strncmp("teste\200","teste\0",6));
	return 0;
}*/
