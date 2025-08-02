

#include "so_long.h"

void	map_valid(t_data *data)
{
	int	e;
	int	c;
	int	p;

	free((e = 0, c = 0, p = 0, NULL));
	getplayerposition(data);
	isrectancle(data);
	check_content(data);
	check_wall(data);
	check_nbrcontent(data, e, c, p);
	check_valid_path(data);
}
