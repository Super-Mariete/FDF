/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:19:33 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/26 18:08:34 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	num;

	num = 'a';
	printf("If num is %c, ft_isdigit is %i\n", num, ft_isdigit(num));
	printf("If num is %c, isdigit is %i\n", num, isdigit(num));
	num ='9';
	printf("If num is %c, ft_isdigit is %i\n", num, ft_isdigit(num));
	printf("If num is %c, isdigit is %i\n", num, isdigit(num));
	return (0);
}*/
