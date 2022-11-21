/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:54:21 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 16:50:22 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = s;
	ft_memset(str, '\0', n);
}
/*
int main(void)
{
	char str[] = "boas";
	ft_bzero(str,3);
	return 0;
}*/
