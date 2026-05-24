/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:44:19 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 18:02:57 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_copy;
	size_t	i;

	s1_copy = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s1_copy)
		return (0);
	i = 0;
	while (s1[i])
	{
		s1_copy[i] = s1[i];
		i++;
	}
	s1_copy[i] = '\0';
	return (s1_copy);
}
/*
int main(void)
{
	char  *string;
	char  *copy;
	
	string = "Hello World";
	printf("String is: %s.\nNow we are gonna copy it.\n\n", string);
	copy = ft_strdup(string);
	printf("Here is the copy: %s.\n", copy);
	free(copy);
	printf("Finally, copy memory has been dellocated");
	return (0);
}*/
