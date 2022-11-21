/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:25:41 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/14 15:04:04 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	lennum(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n > 0)
	{
		while (n)
		{
			n = n / 10;
			i++;
		}
	}
	if (n < 0)
	{
		n *= -1;
		while (n)
		{
			n = n / 10;
			i++;
		}
		return (i + 1);
	}
	return (i);
}

char	*func_strnbr(int n, int i)
{
	char	*p;

	p = malloc(i + 1 * sizeof(char));
	if (!(p))
		return (0);
	p[i] = '\0';
	n *= -1;
	i--;
	if (-n == -2147483648)
	{
		p[i] = '8';
		n = 214748364;
		i--;
	}
	while (i >= 1)
	{
		p[i] = n % 10 + 48;
		n = n / 10;
		i--;
	}
	p[i] = '-';
	return (p);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*p;

	i = lennum(n);
	if (n >= 0)
	{
		p = malloc(i + 1 * sizeof(char));
		if (!p)
			return (0);
		p[i] = '\0';
		i--;
		while (i >= 0)
		{
			p[i] = n % 10 + 48;
			n = n / 10;
			i--;
		}
	}
	if (n < 0)
		p = func_strnbr(n, i);
	return (p);
}
/*
int main(void)
{
	char *p;
	p = ft_itoa(-2147483648);
	printf("%s",p);
	return 0;
}
*/
