/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:59:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 17:59:54 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
	{
		write(fd, &c, 1);
	}
}
/*
int	main(void)
{
	char	letter;
	int	fildes;

	letter = 'A';
	fildes = 1;
	ft_putchar_fd(letter, fildes);
	return (0);
}*/
