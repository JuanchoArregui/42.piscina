#include "headers.h"

char	*ft_stdin(int file)
{
	char	*map_stdin;
	char	buffer[BUFFER_SIZE + 1];

	read(file, buffer, BUFFER_SIZE);
	map_stdin = buffer;
	return (map_stdin);
}
