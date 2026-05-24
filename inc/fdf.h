#ifndef FDF_H
# define FDF_H

# include "mlx.h"
# include "libft.h"
# include "get_next_line.h"
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>

# define WIN_WIDTH 1080
# define WIN_HEIGHT 720

/* Keycodes for portability */
# ifdef __APPLE__
#  define K_ESC 53
#  define K_UP 126
#  define K_DOWN 125
# else
#  define K_ESC 65307
#  define K_UP 65362
#  define K_DOWN 65364
# endif

typedef struct s_point
{
	float	x;
	float	y;
	float	z;
	int		color;
}	t_point;

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*img_ptr;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		width;
	int		height;
	t_point	**map;
}	t_data;

/* Prototypes */
void	parse_map(char *filename, t_data *data);
void	free_map(t_data *data);
void	render(t_data *data);
void	draw_map(t_data *data);
int		close_app(t_data *data);
void	free_data(t_data *data);

#endif