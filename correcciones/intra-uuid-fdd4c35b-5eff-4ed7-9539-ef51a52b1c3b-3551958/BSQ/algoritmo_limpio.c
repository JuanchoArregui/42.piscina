#include "ft_fts.h"
void ft_solve_casilla(int x0, int y0,char **tab, struct s_tab *T1)
{
	int x1;
	int y1;
	int i;
	int j;

	if (x0 > y0)
	{
		x1 = T1->ancho;
		y1 = y0;
	}
	else
	{
		x1 = x0;
		y1 = T1->alto;
	}

	j = 0;
	while (j + y0 < T1 -> alto)
	{
		i = 0;
		while (i + x0 < T1 -> ancho)
		{
			if (tab[j + y0][i + x0] == T1 -> obstaculo)
			{	
				if ((i * i + j * j) < (x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0))
				{
					x1 = i + x0;
					y1 = j + y0;
				}
			}
			i++;
		}
		j++;
	}
	if (ft_max(x1-x0, y1-y0) > T1->lado)
	{
		T1->lado = ft_max(x1 - x0, y1 - y0);
		T1->x0 = x0;
		T1->y0 = y0;
	}
}

void ft_solve_matrix(struct s_tab *T1, char **tab)
{
	int x0;
	int y0;

	y0 = 0;
	while (y0 < T1->alto)
	{
		x0 = 0;
		while (x0 < T1->ancho)
		{
			ft_solve_casilla(x0, y0, tab, T1);
			x0++;
		}
		y0++;
	}
	//ft_print_matrix(T1->ancho, T1->alto, tab);
	//write(1, "\n", 1);
	ft_fill(T1->x0, T1->y0, T1, tab);
	ft_print_matrix(T1->ancho, T1->alto, tab);
}



