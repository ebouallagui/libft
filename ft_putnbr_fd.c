/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboualla <eboualla@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:40:09 by eboualla          #+#    #+#             */
/*   Updated: 2026/04/23 16:55:09 by eboualla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (!n)
		return ;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", fd);
		return ;
	}
	if (nb < 0)
	{
		write(fd, '-', 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}
