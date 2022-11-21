/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:34:20 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 14:48:13 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	while (*s != (char)c && i > 0)
	{
		s--;
		i--;
	}
	if (i == 0 && *s != (char)c)
		return (NULL);
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
