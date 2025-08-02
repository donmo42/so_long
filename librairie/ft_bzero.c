

#include "../src/so_long.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*scpy;
	size_t			i;

	i = 0 ;
	scpy = (unsigned char *) s;
	while (n > i)
	{
		scpy[i] = '\0';
		i++;
	}
}
