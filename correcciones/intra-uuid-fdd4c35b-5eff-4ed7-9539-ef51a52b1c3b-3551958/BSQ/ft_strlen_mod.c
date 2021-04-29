#include "ft_fts.h"
int	ft_strlen_mod(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\n')
	{
		i++;
	}
	return (i);
}
