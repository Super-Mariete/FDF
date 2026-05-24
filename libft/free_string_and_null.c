/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_and_null.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:36:08 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/07/10 13:53:04 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "complete_libft.h"

//I don't know yet if this can put nullto every data
void	free_string_and_null(char **heap_data)
{
	free(*heap_data);
	*heap_data = NULL;
}
