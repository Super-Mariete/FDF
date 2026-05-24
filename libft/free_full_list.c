/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_full_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:47:13 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/07/09 19:37:31 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	free_full_list(t_list **list)
{
	t_list	*aux;

	while (*list)
	{
		aux = *list;
		*list = (*list)->next;
		free(aux);
	}
}
