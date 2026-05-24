/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_upper.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:18:44 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/07/09 15:58:55 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complete_libft.h"

int	ft_is_upper(int c)
{
	if (c >= 65 && c <= 90)
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
