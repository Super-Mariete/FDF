/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_protected.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:15:13 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/08/03 20:52:24 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

static int	overflow(long sign)
{
	if (sign < 0)
		return (INT_MIN);
	return (INT_MAX);
}

/*Counter checks cases of overflow or non-conversion*/
int	ft_atoi_protected(const char *str, int *counter)
{
	long	result;
	long	sign;

	result = 0;
	*counter = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		++str;
	if (*str == '-' || *str == '+')
	{
		sign = 1 - 2 * (*str == '-');
		++str;
	}
	while (*str == '0' && *(str + 1) != '\0')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		result = 10 * result + (*str++ - '0');
		++(*counter);
	}
	if (result > INT_MAX || *counter > 10)
		return (overflow(sign));
	return (result * sign);
}
