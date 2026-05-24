/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_digit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:02:12 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/17 19:09:55 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complete_libft.h"

/*Returns pointer to digit char*/
char	*ft_strchr_digit(const char *s)
{
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			return ((char *)s);
		s++;
	}
	return (0);
}
/*
int	main(void)
{
	char*	string;
	char	l;
	//char*	result;
	char*	myresult;

	string = "Hello there";
	l = 'o';
	printf("String is: %s\n", string);
	//result = strchr(string, l);
	myresult = ft_strchr(string, l);
	//printf("Result is: %d\n", result);
	printf("My result is: %s\n", myresult);
	return (0);
}*/
