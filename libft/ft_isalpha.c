/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:18:44 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/26 17:57:25 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	*text;

	text = "d";
	printf("ft_isalpha applied to %s\n", text);
	printf("returns value %i\n\n", ft_isalpha(*text));
	printf("isalpha applied to %s\n", text);
	printf("returns value %i", isalpha(*text));
	return (0);
}*/
