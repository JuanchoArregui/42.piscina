#include "headers.h"

int	main(int argc, char *argv[])
{
	int		i;
	int		file;
	char	buffer[BUFFER_SIZE + 1];
	int		map_key[5];
	char	*map_stdin;

	file = 0;
	i = 1;
	map_stdin = NULL;
	if (argc == 1)
	{
		map_stdin = ft_stdin(file);
		if (!fn_map_check_valid(map_key, map_stdin))
			ft_putstr("map error\n");
		fn_strtomap(map_key, map_stdin);
		close(file);
		ft_putchar('\n');
		return (0);
	}
	while (i <= argc)
	{
		file = open(argv[i], O_RDONLY);
		if (!file)
			ft_putstr("map error\n");
		read(file, buffer, BUFFER_SIZE);
		if (!fn_map_check_valid(map_key, buffer))
			ft_putstr("map error\n");
		else
		{
			fn_strtomap(map_key, buffer);
		}
		close(file);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
