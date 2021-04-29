#include "rush02.h"

char	*get_dict_name_path(int argc, char **argv)
{
	if (argc == 3)
		return (argv[1]);
	else
		return ("numbers.dict");
}

int	check_open_dict(char *dict_name_path)
{
	int	check_open;

	check_open = open(dict_name_path, O_RDONLY);
	if (check_open == -1)
	{
		write(2, "Dict Error\n", 11);
		return (0);
	}
	return (1);
}