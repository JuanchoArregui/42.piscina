#include "ft_fts.h"
void	ft_putstr(char *str)
{
	int		i;
	char	aux;

	i = 0;
	while (*(str + i) != '\0')
	{
		aux = str[i];
		write(1, &aux, 1);
		i++;
	}
}
