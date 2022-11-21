/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 12:29:02 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/14 15:42:46 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*a;
	const char	*b;

	a = dest;
	b = src;
	if (!src && !dest)
		return (NULL);
	if (dest < src)
		ft_memcpy(a, b, n);
	else
	{
		while (n-- != 0)
			a[n] = b[n];
	}
	return (a);
}
/*
int main(void)
{
   char dest[] = "aaaaaaaaaaaaaaaaa";
   char	src[] = "lorem ipsum dolor sit amet";
   

   printf("Before ft_memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest,src,8);
   printf("After ft_memmove dest = %s, src = %s\n", dest, src);

   return(0);

}*/
