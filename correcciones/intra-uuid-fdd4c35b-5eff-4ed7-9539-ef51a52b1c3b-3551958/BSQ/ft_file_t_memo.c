#include "ft_fts.h"
void	ft_file_t_array(char *file_name, char *dict)
{
	int		fd;
	char	c;
	int		i;

	i = 0;
	fd = open(file_name, O_RDONLY);
	if (fd != -1)
	{
		while (read(fd, &c, 1))
		{
			dict[i] = c;
			i++;
		}
		dict[i] = '\0';
		close(fd);
	}
}

char	*ft_file_t_memo(char *file_name)
{
	int		fd;
	char	c;
	int		i;
	char	*dict;

	i = 0;
	fd = open(file_name, O_RDONLY);
	if (fd != -1)
	{
		while (read(fd, &c, 1))
			i++;
		close(fd);
		dict = malloc (i + 1);
	}
	ft_file_t_array(file_name, dict);
	return (dict);
}
