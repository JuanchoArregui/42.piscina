#include "headers.h"

int	fn_map_check_open(char *map_path)
{
	int	check_open;

	check_open = open(map_path, O_RDONLY);
	if (check_open == -1)
		return (0);
	return (1);
}
