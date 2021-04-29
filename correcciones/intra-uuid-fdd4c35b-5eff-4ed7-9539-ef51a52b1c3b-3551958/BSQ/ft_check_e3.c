#include "ft_fts.h"
int ft_check_e3(char *firstline, char *tablero)
{
	if(ft_read_height(firstline) != ft_count_lines(tablero))
		return(1);
	return(0);
} 
