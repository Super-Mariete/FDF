/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:25:26 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 17:53:49 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;	
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && (str1 || str2))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	myresult;
	int	expected;

	char*	str1; 
	str1= "rggsrhs";
	char*	str2;
	str2= "nxhjfgjfj";
	myresult = ft_memcmp(str1, str2, 5);
	expected = memcmp(str1, str2, 5);
	printf("Myresult: Strs differ %d. Expected: %d\n", myresult, expected);
	return (0);
}*/