#include "ft_fts.h"
void	ft_print_matrix(int ancho, int alto, char **tab)
{
	int i;
	int j;

	j = 0;
	while (j < alto)
	{
		i = 0;
		while(i < ancho)
		{
			write(1, &tab[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
	return;
}