/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:58:48 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/04/25 17:59:17 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*man calls void *b, but I saw in other examples calling it "dest"*/
/*void *b expects us to assign a var type to it. That's casting. look at w*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*v;
	size_t			i;

	i = 0;
	v = (unsigned char *)b;
	while (i < len)
	{
		v[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	text[11]; 

	ft_memset(text, 'l', sizeof(text));
	printf("%s\n",text);	
	ft_memset(text, 'H', 1);
	printf("%s\n",text);	
	ft_memset(text+4, 'o', 4);
	printf("%s\n",text);
	ft_memset(text+10, 'd', 1);
	printf("%s\n",text);
	ft_memset(text+10, 'd', 1);
	printf("%s\n",text);
	ft_memset(text+5, 32, 1);
	printf("%s\n",text);
	ft_memset(text+6, 'W', 1);
	printf("%s\n",text);
	ft_memset(text+1, 'e', 1);
	printf("%s\n",text);
	ft_memset(text+8, 'r', 1);
	printf("%s\n",text);
	ft_memset(text, '%', sizeof(text));
	printf("%s\n",text);
	ft_memset(text, 32, sizeof(text));
	printf("%s",text);	
	return (0);
}*/