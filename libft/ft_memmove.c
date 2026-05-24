/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:58:01 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/05 00:55:25 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;

	if (len != 0)
	{
		s = (char *)src;
		d = (char *)dst;
		if (d > s)
		{
			while (len--)
				d[len] = s[len];
		}
		else
			ft_memcpy(d, s, len);
	}
	return (dst);
}
/*
int	main(void)
{
	size_t	n;
	char	*ptr;

	char	end[] = "Patata";
	n = 3;
	ptr = &end[3];
	memmove(ptr, end, n);
	printf("And now end is %s\n", end);
	return (0);
}*/