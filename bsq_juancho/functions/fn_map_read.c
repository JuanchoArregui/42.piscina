#include<headers.h>

char	*fn_map_read(int file, char *argv)
{
	int		i;
	int		r;
	char	*str_map;
	char	buffer[BUFFER_SIZE + 1];

	i = 0;
	while ((r = read(file, buffer, BUFFER_SIZE)))
	{
		buffer[r] = '\0';
		str_map = buffer;
	}
	return (str_map);
}

