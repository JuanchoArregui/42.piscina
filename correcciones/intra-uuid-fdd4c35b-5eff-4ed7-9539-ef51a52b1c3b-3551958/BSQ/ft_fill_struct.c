#include "ft_fts.h"
void	ft_fill_struct (struct s_tab *T1, char *firstline, char *tab)
{
	int len_L1;
	
	len_L1 = ft_strlen(firstline);
	T1->vacio = firstline[len_L1 - 3];
	T1->obstaculo = firstline[len_L1 - 2];
	T1->lleno = firstline[len_L1 - 1];
	T1->ancho = ft_strlen_mod(tab);
	T1->alto = ft_read_height(firstline);
	T1->lado = 0;
	T1->x0 = 0;
	T1->y0 = 0;
}
