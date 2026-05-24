/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:02:12 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/08/04 20:51:07 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*We iterate inside the pointer, we change the pointer direction.
 * Then, we return the pointer, at the last position it has been*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
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
