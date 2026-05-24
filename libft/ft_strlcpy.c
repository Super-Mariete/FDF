/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:07:58 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/13 20:43:35 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	w;

	i = 0;
	w = dstsize - 1;
	if (!(dstsize == 0))
	{
		while (src[i] != '\0' && i != w)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	dest[] = "Patatas";
	char	origen[] = "Hola";

	printf("Look at dest: %s\n", dest);
	int cpy = ft_strlcpy(dest, origen, 4);
	printf("Now look what happened to dest: %s\n", dest);
	printf("Cp %d, len %lu and sz %lu\n", cpy, strlen(dest), sizeof(dest));
	return (0);
}*/
