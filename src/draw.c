#include "fdf.h"

static void	project(t_point *p)
{
	float	prev_x;
	float	prev_y;

	p->x *= 30;
	p->y *= 30;
	p->z *= 2;
	prev_x = p->x;
	prev_y = p->y;
	p->x = (prev_x - prev_y) * cos(0.523599);
	p->y = (prev_x + prev_y) * sin(0.523599) - p->z;
	p->x += WIN_WIDTH / 2.5;
	p->y += WIN_HEIGHT / 5;
}

static void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	if (x >= 0 && x < WIN_WIDTH && y >= 0 && y < WIN_HEIGHT)
	{
		dst = data->addr + (y * data->line_length + (x * (data->bits_per_pixel / 8)));
		*(unsigned int *)dst = color;
	}
}

static void	draw_line(t_point p1, t_point p2, t_data *data)
{
	float	x_step;
	float	y_step;
	int		max;

	project(&p1);
	project(&p2);
	x_step = p2.x - p1.x;
	y_step = p2.y - p1.y;
	max = fmax(fabs(x_step), fabs(y_step));
	if (max == 0)
		return ;
	x_step /= max;
	y_step /= max;
	while (max--)
	{
		my_mlx_pixel_put(data, (int)p1.x, (int)p1.y, 0xFFFFFF);
		p1.x += x_step;
		p1.y += y_step;
	}
}

void	draw_map(t_data *data)
{
	int	x;
	int	y;

	y = -1;
	while (++y < data->height)
	{
		x = -1;
		while (++x < data->width)
		{
			if (x < data->width - 1)
				draw_line(data->map[y][x], data->map[y][x + 1], data);
			if (y < data->height - 1)
				draw_line(data->map[y][x], data->map[y + 1][x], data);
		}
	}
}

void	render(t_data *data)
{
	ft_memset(data->addr, 0, WIN_HEIGHT * data->line_length);
	draw_map(data);
	mlx_put_image_to_window(data->mlx_ptr, data->win_ptr, data->img_ptr, 0, 0);
}