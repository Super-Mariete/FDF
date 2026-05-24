/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 20:26:12 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/03/22 17:14:53 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *str, char c, size_t num_words)
{
	size_t	i;
	size_t	c_skip;

	i = 0;
	c_skip = 1;
	while (str[i])
	{
		if (str[i] != c && c_skip == 1)
		{
			num_words++;
			c_skip = 0;
		}
		if (str[i] == c && c_skip == 0)
			c_skip = 1;
		i++;
	}
	return (num_words);
}

static char	**memerror(char **array, size_t n)
{
	while (n <= 0)
		free(array[n--]);
	free(array);
	return (0);
}

static char	**found_words(char **result, char const *str, char c, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	start = i;
	j = 0;
	while (str && j < n)
	{
		if ((str[i] == c || str[i] == '\0') && i != start)
		{
			result[j] = ft_substr(str, start, i - start);
			if (!result[j])
				return (memerror(result, j));
			start = i + 1;
			j++;
		}
		else if (str[i] == c && i == start)
			start++;
		i++;
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	n_ptr;

	if (s)
	{
		n_ptr = 0;
		n_ptr = count_words(s, c, n_ptr);
		array = ft_calloc(n_ptr + 1, sizeof(char *));
		if (!array)
			return (0);
		else if (n_ptr == 0)
			return (array);
		else if (n_ptr > 0)
			array = found_words(array, s, c, n_ptr);
		return (array);
	}
	return (0);
}
