/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:41:28 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/05/14 21:32:45 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void	my_ft(unsigned int i, char *str)
{
	int	num;

	if (ft_isalpha(*str) && (!(*str >= 65 && *str <= 90)))
		*str = *str - 32;
	else if (ft_isdigit(*str))
	{
		num = *str - '0';
		num = num / 2;
		*str = num + '0';
	}
}

int	main(void)
{
	char	text[] = "Hello, World. I'm Enrique, studtent at 42 Madrid!";
	printf("%s\n\n", text);
	ft_striteri(text, my_ft);
	printf("%s\n", text);
	return (0);
}*/
