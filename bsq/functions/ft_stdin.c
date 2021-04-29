#include<headers.h>

void	ft_stdin(int file)
{
	char	buffer[BUFFER_SIZE + 1];

	while (read(file, buffer, BUFFER_SIZE))
		ft_putstr(buffer);
}
