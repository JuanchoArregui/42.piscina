#include "ft_fts.h"
void	ft_splitt_tab(char *file,	char *tab)
{
	while (*file)
	{
		if (*file != '\n')
		{
			file++;
		}
		else
			break ;
	}
	file++;
	while (*file)
	{
		*tab = *file;
		tab++;
		file++;
	}
	*tab = 0;
}

char	*ft_split_tab(char *file)
{
	int		c;
	int		d;
	char	*tab;

	d = 0;
	c = 0;
	tab = 0;
	while (file[c])
	{
		if (file[c] != '\n')
			c++;
		else
			break ;
	}
	c++;
	while (file[c])
	{
		d++;
		c++;
	}
	tab = (char *) malloc(sizeof(char) * d + 1);
	if (!tab)
		return(0);
	ft_splitt_tab(file, tab);
	return (tab);
}
