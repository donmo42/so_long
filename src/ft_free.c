
#include "so_long.h"

void	freemap(t_data *data)
{
	int	i;

	i = 0;
	while (data->map[i])
	{
		free(data->map[i]);
		i++;
	}
	free(data->map);
	free(data);
}

void	destroy_images(t_data *data)
{
	mlx_destroy_image(data->mlx_ptr, data->img.wall);
	mlx_destroy_image(data->mlx_ptr, data->img.floor);
	mlx_destroy_image(data->mlx_ptr, data->img.exit);
	mlx_destroy_image(data->mlx_ptr, data->img.collectible);
	mlx_destroy_image(data->mlx_ptr, data->img.enemy);
	mlx_destroy_image(data->mlx_ptr, data->img.player);
	mlx_destroy_image(data->mlx_ptr, data->img.player1);
	// if (data->player_img)
	// 	mlx_destroy_image(data->mlx_ptr, data->img.player1);
	// if (data->player_img)
	// 	mlx_destroy_image(data->mlx_ptr, data->img.player);
}