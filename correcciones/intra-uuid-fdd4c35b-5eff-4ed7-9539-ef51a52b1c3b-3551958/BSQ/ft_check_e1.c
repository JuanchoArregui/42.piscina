#include "ft_fts.h"
int	ft_es_imprimible(char caracter)
{
	return ((caracter >= ' ') && (caracter <= '~'));
}

int	ft_son_distintos3(char a, char b, char c)
{
	return ((a != b) && (a != c) && (b != c));
}

int	ft_es_distinto4(char a, char b, char c, char d)
{
	return ((d != a) && (d != b) && (d != c));
}

int	ft_check_tablero_caracteres(char a, char b, char c, char *tablero)
{
	int		i;
	char	d;

	i = 0;
	while (tablero[i] != '\0')
	{
		d = tablero[i];
		if ((d == '\n') && tablero[i + 1] == '\n')
			return(1);
		if (ft_es_distinto4(a, b, c, d) && (d != '\n'))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_caracteres(char *firstline, char *tablero)
{
	int		len;
	char	a;
	char	b;
	char	c;

    len = ft_strlen(firstline);
	a = firstline[len - 3];
	b = firstline[len - 2];
	c = firstline[len - 1];
	if (!(ft_son_distintos3(a, b, c)))
		return (1);
	if (!(ft_es_imprimible(a) && ft_es_imprimible(b) && ft_es_imprimible(c)))
		return (1);
	if (ft_check_tablero_caracteres(a, b, c, tablero))
		return (1);
	return(0);
}
