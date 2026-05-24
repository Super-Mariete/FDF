/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:23:15 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/13 20:45:30 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 * Here, loop with parameter (i < n) and i = 0 
 * protects function in case of s = NULL*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char) c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	*ptr1;
	int	*ptr2;
	int	looking;

	int	src[2][2] = {{24, 53}, {17, 42}};
	looking = 42;
	ptr1 = ft_memchr(src, looking, 12);
	ptr2 = ft_memchr(src, looking, 13);
	if(ptr1)
		{
			ft_putendl_fd("ptr1 found", 1);
			ft_putnbr_fd(ptr1[0], 1);
			ft_putstr_fd("\n\n", 1);
		}
	if(ptr2)
	{
		ft_putendl_fd("ptr2 found", 1);
		ft_putnbr_fd(ptr2[0], 1);
		ft_putstr_fd("\n\n", 1);
	}
	else
		ft_putendl_fd("pointers not found", 1);
	return (0);
}*/
