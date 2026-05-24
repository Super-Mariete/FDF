/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:21:44 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 17:51:16 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	p;

	p = ' ';
	printf("Char %c return %i wih my function\n", p, ft_isprint(p));
	printf("Char %c return %i wih my function\n\n", p, ft_isprint(p));
	p = '~';
	printf("Char %c return %i wih my function\n", p, ft_isprint(p));
	printf("Char %c return %i wih my function\n\n", p, ft_isprint(p));
 	p = ']';
	printf("Char %c return %i wih my function\n", p, ft_isprint(p));
	printf("Char %c return %i wih my function\n\n", p, ft_isprint(p));
	p = 0;
	printf("Char nul %c return %i with my function\n", p, ft_isprint(p));
	printf("Char nul %c return %i with my function\n\n", p, ft_isprint(p));
	return (0);
}*/
