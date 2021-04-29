#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/* unsigned int map_key[10] = {10, 3, '.', 'o', 'X', 0, 0, 0};

unsigned int maptest_key[10] = {10, 10, '.', 'o', 'X', 0, 0, 0};

char **maptest;
(char *)maptest[0] = "..........";
*maptest[1] = "..........";
*maptest[2] = "..........";
*maptest[3] = "..........";
maptest[4] = "..........";
maptest[5] = "..........";
maptest[6] = "..........";
maptest[7] = "..........";
maptest[8] = "..........";
maptest[9] = ".........."; */


unsigned int map2d_key_test[10] = {10, 10, '.', 'o', 'X', 0, 0, 0, 7, 7};
char *map2d_test[] = {"..........", "..........", "....o.....", "..........", "..........", "..........", "..........", "..........", "..........", "........o."};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	**map_malloc_2d(unsigned int map_key[10])
{
	unsigned int	row;
	unsigned int	col;
	int				r;
	char 			**map2d;

	row = map_key[1];
	col = map_key[0];
	r = 0;
	map2d = (char **)malloc(row * sizeof(char *));
	while (r < row)
	{
		map2d[r] = (char *)malloc(col * sizeof(char));
		r++;
	}
	return map2d;
}

void	fn_map_print(unsigned int map_key[10], char **map2d)
{
	unsigned int	row;
	unsigned int	col;
	unsigned int	r;
	unsigned int	c;

	row = map_key[1];
	col = map_key[0];
	r = 0;
	while (r < row)
	{
		c = 0;
		while ( c < col)
		{
			ft_putchar(map2d[r][c]);
			c++;
			if (c == col)
				ft_putchar('\n');
		}
	r++;
	}
}

void map_free(unsigned int map_key[10], char **map2d)
{
	unsigned int	row;
	unsigned int	col;
	unsigned int	r;
	unsigned int	c;

	row = map_key[1];
	col = map_key[0];
	r = 0;
	while(r < row)
	{
		if(map2d[r])
			free(map2d[r]);
		r++;
	}
	free(map2d);
}

unsigned int map_find_max_sq(unsigned int map_key[10], char **map2d)
{
	unsigned int	r;
	unsigned int	c;
	unsigned int	size;
	unsigned int	size_temp;


	size = 0;
	while ( size < (map_key[1] - map_key[8]))
	{
		r = map_key[9];
		size_temp = r + size;
		while (r <= size_temp)
		{
			c = map_key[8];
			while ( c <= size_temp)
			{
				if (map2d[r][c] == map_key[3])
					return (size);
				c++;
			}
			r++;
		}
		size++;
	}
	return (size);
}

void map_solve(unsigned int map_key[10], char **map2d)
{
	unsigned int	r;
	unsigned int	c;
	unsigned int	size_temp;

	r = 0;
	while (r < map_key[1])
	{
		c = 0;
		while ( c < map_key[0])
		{
			map_key[9] = r;
			map_key[8] = c;
			size_temp = map_find_max_sq(map_key, map2d);
			if (size_temp > map_key[7])
			{
				map_key[6] = r;
				map_key[5] = c;
				map_key[7] = size_temp;	
			}
			c++;
		}
		r++;
	}
}

void map_set_solution(unsigned int map_key[10], char **map2d)
{
	unsigned int	r;
	unsigned int	c;
	unsigned int	r_end;
	unsigned int	c_end;

	r_end = map_key[6] + map_key[7];
	c_end = map_key[5] + map_key[7];
	r = map_key[6];
	while (r < r_end)
	{
		c = map_key[5];
		while ( c < c_end)
		{
			map2d[r][c] = map_key[4];
			c++;
		}
	}
}





int main(void)
{
	/* printf("valor cadena 1 %s\n", map2d_test[0]);
	map2d_test[0] = "hola que tal";
	printf("valor cadena 1 %s\n", map2d_test[0]);
	map2d_test[0] = "hola kkk";
	printf("valor cadena 1 %s\n", map2d_test[0]);
	printf("valor c %c\n", map2d_test[0][3]); */
	
	//fn_map_print(map2d_key_test, map2d_test);

	map_find_max_sq(map2d_key_test, map2d_test);

	//map_solve(map2d_key_test, map2d_test);
	//map_set_solution(map2d_key_test, map2d_test);
	//fn_map_print(map2d_key_test, map2d_test);

	
	/* map2d = map_malloc_2d(map_key);
	map_free(map_key, map2d); */

	//map_free(maptest_key, maptest);

}