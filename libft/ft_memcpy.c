/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:26:01 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/08/09 19:44:03 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*ft_memcpy takes n bytes from src, and copy it to
dest. Void * are pointers for any typevar. Function is protected for
cases in which both src && dst are NULL*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*src_ptr;
	char		*dest_ptr;
	size_t		i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest_ptr = (char *) dest;
	src_ptr = (const char *) src;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	size_t	num;

	char	o[] = "Hello";
	char	d[] = "Hola";
	num = 2;
	printf("Value of o is %s and for d is %s\n", o, d);
	ft_memcpy(d, o, num);
	printf("New d value is %s\n", d);
	return (0);
}*/
