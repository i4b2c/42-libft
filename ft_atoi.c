/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:55:28 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/08 12:08:10 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	const char	*str;
	int			x;
	int			res;

	x = 1;
	res = 0;
	str = nptr;
	while ((*str >= 9 && *str <= 13) || (*str == ' '))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			x *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		res *= 10;
		res += *str - 48;
		str++;
	}
	return (res * x);
}
