/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 19:03:40 by enrgil-p          #+#    #+#             */
/*   Updated: 2025/01/17 23:27:25 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H

# include "complete_libft.h"
# include <limits.h>

int		ft_atoi_protected(const char *str, int *counter);
long	ft_atol(const char *str);
long	ft_strtol_10(const char *source_str, char **endptr);

#endif
