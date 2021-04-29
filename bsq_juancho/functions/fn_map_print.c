#include<headers.h>

void	fn_map_print(unsigned int **map_array)
{
	unsigned int	row;
	unsigned int	row_max;
	unsigned int	col;
	unsigned int	col_max;

	row = 1;
	row_max = map_array[0][0];
	col_max = map_array[0][1];

	while (row <= row_max)
	{
			col = 1;
		while ( col <= col_max)
		{
			ft_putchar(map_array[row][col]);
			if (col == col_max)
				ft_putchar('\n');
			col++;
		}
	row++;
	}
}
