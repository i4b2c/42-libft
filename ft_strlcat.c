/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:37:38 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/18 11:18:11 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	lens;
	unsigned int	lend;

	if (n == 0)
		return (ft_strlen((char *)src));
	i = 0;
	lend = ft_strlen(dest);
	lens = ft_strlen((char *)src);
	if (n <= lend)
		return (lens + n);
	while (src[i] != '\0' && i < n - lend - 1)
	{
		dest[lend + i] = src[i];
		i++;
	}
	dest[lend + i] = '\0';
	return (lend + lens);
}
