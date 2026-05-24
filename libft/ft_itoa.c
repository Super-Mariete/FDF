/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:21:17 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/03/16 15:20:03 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_chars_needed(int num)
{
	size_t	i;

	i = 0;
	if (num <= 0)
		i++;
	while (num != 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static char	*convert_to_string(char *string, int num, size_t len)
{
	if (num < 0)
	{
		while (len-- != 1)
		{
			string[len] = -1 * (num % 10) + '0';
			num /= 10;
		}
		string[0] = '-';
	}
	else
	{
		while (len-- != 0)
		{
			string[len] = (num % 10) + '0';
			num /= 10;
		}
	}
	return (string);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = count_chars_needed(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	else
		str = convert_to_string(str, n, len);
	return (str);
}
