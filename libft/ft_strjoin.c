/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:45:57 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/18 21:52:32 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	s3_len;
	size_t	s1_len;

	if (s1 || s2)
	{
		if (s1 && !s2)
			return (ft_strdup(s1));
		if (!s1 && s2)
			return (ft_strdup(s2));
		s3_len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
		s3 = ft_calloc (s3_len, sizeof(char));
		if (!s3)
			return (0);
		s1_len = ft_strlen(s1);
		s3 = ft_memcpy(s3, s1, s1_len);
		s3 = ft_memcpy(&s3[s1_len], s2, ft_strlen(s2));
		return (s3 - s1_len);
	}
	return (NULL);
}
/*
int	main(void)
{
	char const	*text_1;
	char const	*text_2;
	char	*merge;

	text_1 = "\0Capi";
	text_2 = "cua";
	printf("Texts are '%s' and '%s'\n", text_2, text_1);
	merge = ft_strjoin(text_1, text_2);
	printf("I joined them, now is: %s\n", merge);
	free(merge);
	return (0);
}*/
