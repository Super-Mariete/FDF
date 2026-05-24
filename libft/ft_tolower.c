/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:23:47 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 18:23:55 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
/*
int	main(void)
{
	char	one;
	char one_m;
	char	two;
	char two_m;



	one = '{';
	two = 'E';
	printf("Look at %c and %c\n", one, two);
	one_m = ft_tolower(one);
	two_m = ft_tolower(two);
	printf("Look now at %c and %c\n", one_m, two_m);
	printf("I don't try with extended ascii and unsgined chars\n");
	printf("because code would not compile");
	return (0);
}*/
