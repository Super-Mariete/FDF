/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 18:14:36 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 18:22:45 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
int	main(void)
{
	char*	string;
	char	l;
	char*	myresult;
	char*	result;

	string = "He\0llo";
	l = '\0';
	myresult = ft_strrchr(string, l);
	result = strrchr(string, l);
	printf("String is: %s\n", string);
	printf("Result is: %s\n", result);
	printf("My result is: %s\n", myresult);
	return (0);
}*/
