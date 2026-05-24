/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_first_node_and_content.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:47:13 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/07/10 13:19:39 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	free_first_node_and_content(t_list **list)
{
	t_list	*aux;

	aux = *list;
	*list = (*list)->next;
	free(aux->content);
	free(aux);
}
