#include "headers.h"

int	fn_map_check_valid2(int *map_key, int length_chars, char *str_map)
{
	int	x;	
	int	counter;
	int	lenghty;

	lenghty = 0;
	counter = 0;
	x = length_chars + 4;
	while (str_map[x] != '\0')
	{
		while (str_map[x] != '\n')
		{
			if (str_map[x] != map_key[2] && str_map[x] != map_key[3])
				return (0);
			x++;
			counter++;
		}
		if (counter != map_key[0])
			return (0);
		x++;
		lenghty++;
		counter = 0;
	}
	if (lenghty != map_key[1])
		return (0);
	return (1);
}

int	fn_map_check_valid(int *map_key, char *str_map)
{
	int	x;
	int	y;
	int	length_chars;

	x = 1;
	y = 4;
	while (str_map[x] != '\n')
	{
		x++;
	}
	length_chars = x - 3;
	x--;
	if (x < 4)
		return (0);
	if (str_map[x] == str_map[x - 1]
		|| str_map[x - 1] == str_map [x - 2]
		|| str_map [x - 2] == str_map [x])
		return (0);
	while (x >= length_chars)
	{
		if (ft_isprintable(str_map[x]))
		{
			map_key[y] = str_map[x];
			x--;
			y--;
		}
		else
			return (0);
	}
	x = 0;
	while (x < length_chars)
	{
		if (!ft_isnumeric(str_map[x]))
			return (0);
		x++;
	}
	x = 0;
	y = 0;
	while (x < length_chars)
	{
		y = (y * 10) + (str_map[x] - '0');
		x++;
	}
	map_key[1] = y;
	x = length_chars + 4;
	while (str_map[x] != '\n')
		x++;
	map_key[0] = x - length_chars - 4;
	if (!fn_map_check_valid2(map_key, length_chars, str_map))
		return (0);
	return (1);
}
