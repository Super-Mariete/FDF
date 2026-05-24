/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:36:20 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/09 20:29:47 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*strlen returns a size_t, not an int. size_t is an unsigned long*/

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	const char*	text;

	text = "Hello World";
	printf("My function counts length %lu in %s\n", ft_strlen(text), text);
	printf("Original counts length %lu in %s\n", strlen(text), text);
	return (0);
}*/
