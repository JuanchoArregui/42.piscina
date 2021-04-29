#include<headers.h>

int	fn_map_check_valid(char *str_map)
{

	map = read(file, );




	int		i;
	int		nb;
	char	line;
	char	obstacle;
	char	fill;

	i = 0;
	nb = ft_atoi(str_map);
	while (str_map[i] >= '0' && str_map[i] <= '9')
		i += 1;
	if (nb < 0)
		return (-1);
	line = str_map[i++];
	obstacle = str_map[i++];
	fill = str_map[i++];
	while (str_map[i] != '\0')
	{
		if (str_map[i] == line || str_map[i] == obstacle || str_map[i] == '\n')
			i += 1;
		else
			return (-1);
	}
	return (1);
}
