/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_safe.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:30:21 by enrgil-p          #+#    #+#             */
/*   Updated: 2026/03/19 17:30:43 by enrgil-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*If buffer has chars after \n, keep for next call. Free buf, buf != next*/
static char	*next_line(char *buf)
{
	char	*next;
	char	*end;

	end = end_line(buf);
	if (end)
	{
		next = dup_line(end + 1);
		if (!next)
		{
			free(buf);
			return (NULL);
		}
		free(buf);
		return (next);
	}
	free(buf);
	return (NULL);
}

/*Like substr. len = strlens + 1. If kept but no \n, dup_line*/
static char	*line_returned(char *kept)
{
	char	*line;
	char	*end;
	size_t	len;

	if (kept != NULL && end_line(kept))
	{
		end = end_line(kept);
		len = (strlen_gnl(kept) - strlen_gnl(end)) + 1;
		line = (char *)malloc((len + 1) * sizeof(char));
		if (!line)
			return (NULL);
		line[len] = '\0';
		line = memcpy_line(line, kept, len);
		return (line);
	}
	else if (kept != NULL)
		return (dup_line(kept));
	return (NULL);
}

/*Read and save line unitl \n. buf null-end == !overflow; free line in join*/
static char	*line_read(int fd, char *line)
{
	ssize_t	nb_read;
	int		i;
	char	*buf;

	buf = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buf)
		return (NULL);
	i = 0;
	while (i <= BUFFER_SIZE)
		buf[i++] = '\0';
	nb_read = 1;
	while (!end_line(buf) && nb_read != 0)
	{
		nb_read = read(fd, buf, BUFFER_SIZE);
		if (nb_read <= 0 && !line)
			return (free(buf), free(line), NULL);
		buf[nb_read] = '\0';
		line = join_line(line, buf);
		if (!line)
			return (free(buf), free(line), NULL);
	}
	free(buf);
	return (line);
}

/*For get_next_lin_extra, kept can't read more than one fd at a time*/
static char	*get_next_lines(int fd, char **kept)
{
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!(*kept) || !end_line(*kept))
	{
		*kept = line_read(fd, *kept);
		if (!*kept)
		{
			free(*kept);
			return (NULL);
		}
	}
	line = line_returned(*kept);
	if (!line)
	{
		free(*kept);
		free(line);
		return (NULL);
	}
	*kept = next_line(*kept);
	return (line);
}

char	*safe_call_to_get_next_line(int fd, int parse_error_flag)
{
	static char	*kept;

	if (parse_error_flag == CONTINUE_READING)
		return (get_next_lines(fd, &kept));
	if (kept)
		free(kept);
	return (NULL);
}
