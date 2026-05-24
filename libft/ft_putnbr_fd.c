/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:00:59 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/14 22:12:09 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (fd >= 0)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			num = n * -1;
		}
		else
			num = n;
		if (num > 9)
			ft_putnbr_fd(num / 10, fd);
		ft_putchar_fd((num % 10) + '0', fd);
	}
}
/*
int	main(void)
{
	int	nb;
	int	fildes;

	nb = -42;
	fildes = 1;
	ft_putnbr_fd(nb, fildes);
	return (0);
}*/
