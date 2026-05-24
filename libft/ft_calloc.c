/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:16:58 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/11 22:52:14 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t	size)
{
	void	*ptr;

	if (!(size == 0 && count > SIZE_MAX / size))
	{
		ptr = (void *)malloc(count * size);
		if (!ptr)
			return (0);
		ft_bzero(ptr, count * size);
		return (ptr);
	}
	return (0);
}
/*
int	main(void)
{
    int *num;
    int i;
   int j;
 
    i = 5;
    num = ft_calloc(10737439202, sizeof(int *));
    num[0] = 42;
    num [3] = 23;
    num[4] = &num[3] - &num[0];
    j = 0;
    while (j < i)
    {
        ft_putendl_fd("Integers of num array", 1);
        ft_putnbr_fd(num[j], 1);
        ft_putchar_fd('\n', 1);
        printf("sizeof: %lu\n\n", sizeof(*num));
        j++;
    }
    num[0] *= 2;
    free(num);
    printf("num memory has been dellocated");
    return (0);
}*/
