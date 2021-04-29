#include "ft_fts.h"
void	ft_splitt_enun(char *file, char *enun)
{
	while (*file)
	{
		if (*file != '\n')
		{
			*enun = *file;
			enun++;
			file++;
		}
		else
			break ;
	}
	*enun = 0;
}

char	*ft_split_enun(char *file)
{
	int		s;
	int		c;
	char	*enun;

	c = 0;
	s = 0;
	enun = 0;
	while (file[c])
	{
		if (file[c] != '\n')
			c++;
		else
			break ;
	}
	c++;
	enun = (char *) malloc(sizeof(char) * c);
	ft_splitt_enun(file, enun);
	return (enun);
}
