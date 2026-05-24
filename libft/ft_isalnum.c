/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:18:10 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/13 14:16:51 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
/*
int	main(void)
{
	char	alnum;

	alnum = '/';
	printf("Char alnum %c has value %i\n", alnum, ft_isalnum(alnum));
	alnum = '6';
	printf("Char alnum %c has value %i\n", alnum, ft_isalnum(alnum));
	alnum = 'A';
	printf("Char alnum %c has value %i\n", alnum, ft_isalnum(alnum));
	alnum = ' ';
	printf("Char alnum %c has value %i\n", alnum, ft_isalnum(alnum));
	alnum = '*';
	printf("Char alnum %c has value %i\n", alnum, ft_isalnum(alnum));
	
	return (0);
}*/
