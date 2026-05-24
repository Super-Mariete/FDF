/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complete_libft.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 04:56:47 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/04/11 17:52:01 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLETE_LIBFT_H
# define COMPLETE_LIBFT_H

/*				FROM PROJECTS				*/
# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include "linked_lists.h"
/*				NOT ASSIGNED TO SPECIFIC PROJECT	*/
# include "conversions.h"
# include "write.h"

/*				ctype.h functions			*/
int		ft_isspace(int c);
int		ft_issign(int c);
int		ft_is_upper(int c);
int		ft_is_lower(int c);
/*				string.h functions			*/
char	*ft_strchr_digit(const char *s);
/*				piscine functions			*/
void	ft_swap(int *a, int *b);
/*				not_libc functions			*/
void	free_strings_array(char **array);
void	free_string_and_null(char **heap_data);
char	**ft_split_whitespace(char const *s);
void	print_error(char *message);

#endif
