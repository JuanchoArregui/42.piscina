#include "ft_fts.h"
char	**ft_str_to_dinam(char *str)
{
	int		j;
	int		i;
	int 	num_lines;
	int		num_colum;
	char	**tab;

	i = 0;
	num_colum = ft_strlen_mod(str);
	num_lines = ft_count_lines(str);
	tab = (char **) malloc(num_lines * sizeof(char*));
	while (i < num_lines)
	{
		tab[i] = (char*) malloc(num_colum * sizeof(char));
		i++;
	}
	i = 0;
	while (i < num_lines)
	{
		j = 0;
		while(j < num_colum)
		{
			tab[i][j] = str[i * num_colum + j + i];
			j++;
		}
		i++;
	}
	return (tab);
}
