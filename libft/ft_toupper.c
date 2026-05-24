/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:24:18 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/05 01:31:06 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
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
	two = 'e';
	printf("Look at %c and %c\n", one, two);
	one_m = ft_toupper(one);
	two_m = ft_toupper(two);
	printf("Look now at %c and %c\n", one_m, two_m);
	printf("I don't try with extended ascii and unsgined chars\n");
	printf("because code would not compile");
	return (0);
}*/
