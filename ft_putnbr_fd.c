/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icaldas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 12:51:27 by icaldas           #+#    #+#             */
/*   Updated: 2022/11/14 14:54:11 by icaldas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nbr, int fd)
{
	if (nbr == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		nbr = 147483648;
	}
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr *= -1;
	}
	if (nbr <= 9)
	{
		ft_putchar_fd(48 + nbr, fd);
		return ;
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
	}
	ft_putnbr_fd(nbr % 10, fd);
}
