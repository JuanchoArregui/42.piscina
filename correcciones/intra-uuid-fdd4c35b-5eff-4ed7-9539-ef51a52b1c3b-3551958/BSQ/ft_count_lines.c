#include "ft_fts.h"
int	ft_count_lines(char *tablero) //esta funcion está bien
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (tablero[i] != '\n')
		i++;
	i++;
	k = 1;
	while (tablero[i] != '\0')
	{
		j = 0;
		while ((tablero[i] != '\0') && (tablero[i] != '\n'))
		{
			j++;
			i++;
		}
		i++;
		k++;
	}
	return (k);
}