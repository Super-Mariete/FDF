/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:18:56 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/26 00:24:09 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

int	ft_lstsize(t_list *lst)
{
	int	result;

	result = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		result++;
	}
	return (result);
}
