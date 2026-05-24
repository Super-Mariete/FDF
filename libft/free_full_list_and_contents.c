/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_full_list_and_contents.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/09 12:47:13 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/07/10 13:21:17 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_lists.h"

void	free_full_list_and_contents(t_list **list)
{
	t_list	*aux;

	while (*list)
	{
		aux = *list;
		*list = (*list)->next;
		free(aux->content);
		free(aux);
	}
}
