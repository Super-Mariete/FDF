/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:38:16 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/15 15:03:46 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	srch_forward(char const *ptr, char const *set, size_t n)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0' && ptr[n] != '\0')
	{
		if (set[i] == ptr[n])
		{
			n++;
			i = 0;
		}
		else
			i++;
	}
	return (n);
}

static size_t	srch_reverse(char const *ptr, char const *set, size_t n)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0' && n > 0)
	{
		if (set[i] == ptr[n])
		{
			n--;
			i = 0;
		}
		else
			i++;
	}
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	forw_i;
	size_t	rev_i;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	forw_i = 0;
	rev_i = ft_strlen(s1) - 1;
	forw_i = srch_forward(s1, set, forw_i);
	if (forw_i <= rev_i)
		rev_i = srch_reverse(s1, set, rev_i);
	result = ft_calloc((rev_i - forw_i) + 2, sizeof(char));
	if (!result)
		return (0);
	result = ft_memcpy(result, &s1[forw_i], (rev_i - forw_i) + 1);
	return (result);
}
/*
int	main(void)
{
	char	*text;
	char	*del;
	char	*cleaned;

	text = "";
	del = "Hola";
	cleaned = ft_strtrim(text, del);
	if (!cleaned)
		return (printf("Function retruned (null)"));

	printf("%s\n", text);
	printf("%s\n", cleaned);
	if (ft_strncmp(cleaned, text, ft_strlen(text)))
	{
		printf("Extracted %s from %s", cleaned, text);
		printf("%lu", sizeof(cleaned));
	}
	else
	{
		printf("No char deleted at %s\n", text);
		printf("Result of function is: %s\n", cleaned);
	}
	free(cleaned);
	return (0);
}*/
