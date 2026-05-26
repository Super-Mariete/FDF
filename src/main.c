#include "fdf.h"

void	free_data(t_data *data)
{
	if (data->map)
		free_map(data);
	if (data->win_ptr)
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	if (data->img_ptr)
		mlx_destroy_image(data->mlx_ptr, data->img_ptr);
	#ifdef __linux__
	if (data->mlx_ptr)
		mlx_destroy_display(data->mlx_ptr);
	#endif
	free(data->mlx_ptr);
}

int	close_app(t_data *data)
{
	free_data(data);
	ft_putendl_fd("Cerrando FdF...", STDOUT_FILENO);
	exit(0);
	return (0);
}

int	handle_key(int keycode, t_data *data)
{
	if (keycode == K_ESC)
		close_app(data);
	else if (keycode == 13) // W
		data->alpha -= 0.05;
	else if (keycode == 1)  // S
		data->alpha += 0.05;
	else if (keycode == 0)  // A
		data->beta -= 0.05;
	else if (keycode == 2)  // D
		data->beta += 0.05;
	else if (keycode == 12) // Q
		data->gamma -= 0.05;
	else if (keycode == 14) // E
		data->gamma += 0.05;
	else if (keycode == 35) // P (Perspective switch)
		data->is_isometric = !data->is_isometric;
	else if (keycode == 24 || keycode == 69) // +
		data->zoom += 2;
	else if (keycode == 27 || keycode == 78) // -
		data->zoom = (data->zoom > 2) ? data->zoom - 2 : 2;
	render(data);
	return (0);
}

int	handle_close(t_data *data)
{
	close_app(data);
	return (0);
}

int	main(int argc, char **argv)
{
	t_data	data;

	if (argc != 2)
		return (ft_putendl_fd("Usage: ./fdf <map.fdf>", 2), 1);
	ft_memset(&data, 0, sizeof(t_data));
	data.zoom = 20;
	data.is_isometric = 1;
	data.x_offset = WIN_WIDTH / 2;
	data.y_offset = WIN_HEIGHT / 2;
	data.mlx_ptr = mlx_init();
	if (!data.mlx_ptr)
		return (ft_putendl_fd("Error: MLX init failed", 2), 1);
	parse_map(argv[1], &data);
	data.win_ptr = mlx_new_window(data.mlx_ptr, WIN_WIDTH, WIN_HEIGHT, "FdF 42");
	data.img_ptr = mlx_new_image(data.mlx_ptr, WIN_WIDTH, WIN_HEIGHT);
	if (!data.win_ptr || !data.img_ptr)
	{
		free_data(&data);
		return (ft_putendl_fd("Error: MLX window/image failed", 2), 1);
	}
	data.addr = mlx_get_data_addr(data.img_ptr, &data.bits_per_pixel,
			&data.line_length, &data.endian);
	mlx_key_hook(data.win_ptr, handle_key, &data);
	mlx_hook(data.win_ptr, 17, 0, handle_close, &data);
	render(&data);
	mlx_loop(data.mlx_ptr);
	return (0);
}