/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:11:07 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/05/19 20:36:33 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITE_H
# define WRITE_H

# include "complete_libft.h"

/*		These functions use original libft, fd 1, or fd 2	*/
void	ft_putstr(char *str);
void	ft_putendl(char *str);
void	ft_putendl_error(char *str);
void	ft_putnbr(int decimal);

#endif
