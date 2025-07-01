#include  "../src/so_long.h"

int taille_tableau(char **tab) 
{ 
    int i ;

    i = 0; 
    while (tab[i] != NULL)
    {
         i++;
    }
    return (i);
}