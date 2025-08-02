
#include "../src/so_long.h"

void	ft_error(char *message, t_data *data)
{
	write(2, message, ft_strlen(message));
	freemap(data);
	exit(EXIT_FAILURE);
}
