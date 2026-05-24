/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_first_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:47:13 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/07/09 19:37:42 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	free_first_node(t_list **list)
{
	t_list	*aux;

	aux = *list;
	*list = (*list)->next;
	free(aux);
}
