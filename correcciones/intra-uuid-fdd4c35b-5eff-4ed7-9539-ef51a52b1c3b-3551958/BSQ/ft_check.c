#include "ft_fts.h"
int	ft_check(char *L1, char *tab)
{
	int	e_1;
	int	e_2;
	int	e_3;

	e_1 = ft_check_caracteres(L1, tab);
	e_2 = (ft_check_tab(tab) || ft_check_nbr(L1));
	e_3 = ft_check_e3(L1, tab);
	if (e_1 || e_2 || e_3)
		ft_putstr("map error\n");
	return (e_1 || e_2 || e_3);
}
