#include "fdf.h"

static int	get_height(char *filename)
{
	int		height;
	int		fd;
	char	*line;

	fd = open(filename, O_RDONLY);
	if (fd < 0) return (0);
	height = 0;
	line = get_next_line(fd);
	while (line)
	{
		height++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (height);
}

static int	get_width(char *filename)
{
	int		fd;
	int		width;
	char	*line;
	char	**split;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	line = get_next_line(fd);
	if (!line)
		return (0);
	split = ft_split(line, ' ');
	width = 0;
	while (split[width])
	{
		free(split[width]);
		width++;
	}
	return (free(split), free(line), close(fd), width);
}

void	free_map(t_data *data)
{
	int	i;

	if (!data->map)
		return ;
	i = -1;
	while (++i < data->height)
		free(data->map[i]);
	free(data->map);
}

static void	fill_points(char *line, t_data *data, int y)
{
	char	**split;
	int		i;
	int		x;

	split = ft_split(line, ' ');
	i = 0;
	x = 0;
	while (split[i] && x < data->width)
	{
		if (split[i][0] != '\0' && split[i][0] != '\n')
		{
			data->map[y][x].x = (float)x;
			data->map[y][x].y = (float)y;
			data->map[y][x].z = (float)ft_atoi(split[i]);
			x++;
		}
		free(split[i++]);
	}
	free(split);
}

void	parse_map(char *filename, t_data *data)
{
	int		fd;
	int		i;
	char	*line;

	data->height = get_height(filename);
	data->width = get_width(filename);
	data->map = (t_point **)malloc(sizeof(t_point *) * data->height);
	if (!data->map) return ;
	fd = open(filename, O_RDONLY);
	i = -1;
	while (++i < data->height)
	{
		data->map[i] = malloc(sizeof(t_point) * data->width);
		if (data->map[i])
			ft_memset(data->map[i], 0, sizeof(t_point) * data->width);
		line = get_next_line(fd);
		fill_points(line, data, i);
		free(line);
	}
	close(fd);
}