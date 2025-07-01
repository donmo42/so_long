
#include  "../src/so_long.h"

void ft_error(const char *message) {
    perror(message);  
    exit(EXIT_FAILURE);  
}