#include "ft_fts.h"
void	ft_fill(int x0, int y0, struct s_tab *T1, char **tab)
{
	int i;
	int j;

	j = 0;
	while ((j + y0 < (T1 -> lado + y0)) && (j + y0 < T1 -> alto))
	{
		i = 0;
		while ((i + x0 < (T1 -> lado + x0)) && (i + x0 < T1 -> ancho))
		{
			tab[j + y0][i + x0] = T1->lleno;
			i++;
		}
	j++;
	}
}