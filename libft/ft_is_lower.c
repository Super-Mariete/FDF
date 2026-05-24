/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:18:44 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/07/09 15:59:08 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complete_libft.h"

int	ft_is_lower(int c)
{
	if (c >= 97 && c <= 122)
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
