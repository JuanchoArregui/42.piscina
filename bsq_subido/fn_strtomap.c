#include "headers.h"

void	fn_strtomap(int *map_key, char *str_map)
{
	char	str_fmap[map_key[0]][map_key[1]];
	int		x;
	int		y;
	int		z;

	x = 0;
	y = 0;
	z = 0;
	while (str_map[x] != '\n')
		x++;
	x++;
	while (str_map[x] != '\0')
	{
		while (str_map[x] != '\n')
		{
			str_fmap[z][y] = str_map[x];
			y++;
			x++;
		}
		str_fmap[z][y] = '\0';
		z++;
		y = 0;
		x++;
	}
}
