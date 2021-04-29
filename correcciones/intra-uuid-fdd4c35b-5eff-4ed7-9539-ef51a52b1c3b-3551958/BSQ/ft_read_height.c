#include "ft_fts.h"
int ft_read_height(char *firstline)
{
	int i;
	int len_L1;
	int num;
	
	i = 0;
	num = 0;
	len_L1 = ft_strlen(firstline); //mirar si el firstline que nos saca pablo tiene \n al final || Pedir que lo pase sin salto de linea.
	while (i < len_L1 - 3) //sin tener en cuenta el \n
	{
		num = num * 10 + firstline[i] - '0';
		i++;
	}
	return (num);
}
