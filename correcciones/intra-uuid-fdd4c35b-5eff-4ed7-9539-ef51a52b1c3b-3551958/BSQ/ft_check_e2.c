#include "ft_fts.h"
int ft_check_nbr(char *firstline)
{
	int i;
	int len;

	len = ft_strlen(firstline);	
	i = 1;
	if (firstline[0] <='0' || firstline[0] > '9')
		return (1);
	while (i < (len - 3))
	{
		if ((firstline[i] < '0') || (firstline[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}

int ft_check_tab(char *tablero)
{
	int i;
	int j;

	int tam_line2;

	i = 0;
	while (tablero[i] != '\n')
		i++;
	tam_line2 = i;
	i++;
	while (tablero[i] != '\0')
	{
		j = 0;
		while ((tablero[i] != '\0') && (tablero[i] != '\n'))
		{
			j++;
			i++;
		}
		i++;
		if (j != tam_line2)
			return (1);
	}
	return (0);
}
