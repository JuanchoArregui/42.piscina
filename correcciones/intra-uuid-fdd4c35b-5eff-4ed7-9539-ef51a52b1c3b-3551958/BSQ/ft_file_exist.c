#include "ft_fts.h"
int	ft_file_exist(char *file_name)
{
	int	fd;

	fd = open(file_name, O_RDONLY);
	if (fd != -1)
	{
		close(fd);
		return (0);
	}
	else
		return (-1);
}
