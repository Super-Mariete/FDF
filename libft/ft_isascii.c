/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:19:12 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 17:46:32 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int	main(void)
{
		char	car;

	car = '/';
	printf("Char car %c returns %i\n", car, ft_isascii(car));
	car = '6';
	printf("Char car %c returns %i\n", car, ft_isascii(car));
	car = 'A';
	printf("Char car %c returns %i\n", car, ft_isascii(car));
	car = ' ';
	printf("Char car %c returns %i\n", car, ft_isascii(car));
	car = '*';
	printf("Char car %c returns%i\n\n", car, ft_isascii(car));
	car = 0;
	printf("Char car nul %c returns %i\n", car, ft_isascii(car));
	car = 0;
	printf("Char car nul %c should return  %i\n\n", car, isascii(car));	
	car = 127;
	printf("Char car %c returns %i\n", car, ft_isascii(car));
	return (0);
}*/
