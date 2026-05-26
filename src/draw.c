#include "fdf.h"

static void	rotate_x(float *y, float *z, double alpha)
{
	float	prev_y;

	prev_y = *y;
	*y = prev_y * cos(alpha) + *z * sin(alpha);
	*z = -prev_y * sin(alpha) + *z * cos(alpha);
}

static void	rotate_y(float *x, float *z, double beta)
{
	float	prev_x;

	prev_x = *x;
	*x = prev_x * cos(beta) + *z * sin(beta);
	*z = -prev_x * sin(beta) + *z * cos(beta);
}

static void	rotate_z(float *x, float *y, double gamma)
{
	float	prev_x;
	float	prev_y;

	prev_x = *x;
	prev_y = *y;
	*x = prev_x * cos(gamma) - prev_y * sin(gamma);
	*y = prev_x * sin(gamma) + prev_y * cos(gamma);
}

static void	project(t_point *p, t_data *data)
{
	p->x *= data->zoom;
	p->y *= data->zoom;
	p->z *= (data->zoom / 10);
	p->x -= (data->width * data->zoom) / 2;
	p->y -= (data->height * data->zoom) / 2;
	rotate_x(&p->y, &p->z, data->alpha);
	rotate_y(&p->x, &p->z, data->beta);
	rotate_z(&p->x, &p->y, data->gamma);
	if (data->is_isometric)
	{
		float prev_x = p->x;
		float prev_y = p->y;
		p->x = (prev_x - prev_y) * cos(0.523599);
		p->y = (prev_x + prev_y) * sin(0.523599) - p->z;
	}
	p->x += data->x_offset;
	p->y += data->y_offset;
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

	project(&p1, data);
	project(&p2, data);
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