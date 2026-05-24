/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enrgil-p <enrgil-p@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:30:21 by enrgil-p          #+#    #+#             */
/*   Updated: 2024/09/08 15:51:58 by enrgil-p         ###   ########.fr       */
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

/*Three phases: read and save, prepare line and keep next line*/
char	*get_next_line(int fd)
{
	static char	*kept[MAX_FD];	
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!kept[fd] || !end_line(kept[fd]))
	{
		kept[fd] = line_read(fd, kept[fd]);
		if (!kept[fd])
		{
			free(kept[fd]);
			return (NULL);
		}
	}
	line = line_returned(kept[fd]);
	if (!line)
	{
		free(kept[fd]);
		free(line);
		return (NULL);
	}
	kept[fd] = next_line(kept[fd]);
	return (line);
}
