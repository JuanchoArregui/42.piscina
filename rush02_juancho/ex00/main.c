#include "rush02.h"

int	main(int argc, char **argv)
{
	char	*str_nb;
	char	*dict_name_path;
	char	*str;
	int		i;

	str = (char *)malloc(sizeof(char) * 4);
	if (!check_input_args(argc))
		return (0);
	str_nb = argv[(argc - 1)];
	i = check_input_number(str_nb);
	if (!i)
		return (0);
	dict_name_path = get_dict_name_path(argc, argv);
	if (!check_open_dict(dict_name_path))
		return (0);
	print_words(i, argv, str);
	return (1);
}

/* 
1º checamos el número de parametros introducidos con: "check_input_args".
	si da error imprimimos error y salimos.
2º si nº arg Ok, checamos el número con "check_input_number"
	si hay caracteres no numericos da error
	si el número es mayor que un int sign da error
3º si el numero está ok, le quitamos los ceros a la izq.
4º vemos qué diccionario hay que usar
	si nos han pasado uno lo guardamos
	si no, usamos el que tenemos por defecto
5º checamos si podemos abrir el diccionario
	si no lanzamos error de diccionario
6º checamos si el diccionario cumple los requisitos
	si no lanzamos error de diccionario (pendiente)
7º SI NUMERO Y DICCIONARIO ESTÁN OK, ENTONCES LANZAMOS "print_words"
 */

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	div_string(int *i, char *str, char *argv, int *l)
{
	int		j;
	int		k;

	k = 0;
	j = 0;
	if (*i % 3 != 0)
		while (*i % 3 != 0)
		{
			str[k] = argv[*l];
			(*i)--;
			k++;
			(*l)++;
		}
	else
		while (j < 3)
		{
			str[k] = argv[*l];
			j++;
			k++;
			(*l)++;
		}
	str[k] = 0;
}

void	print_words(int i, char **argv, char *str)
{
	int	j;
	int	k;
	int	l;

	j = i / 3;
	if (i % 3 != 0)
		j++;
	k = j;
	while (j != 0)
	{
		div_string(&i, str, argv[1], &l);
		if (j != k && ft_strcmp(str, "000") != 0)
			write(1, ", ", 2);
		if (j == 1 && ft_strcmp(str, "000") != 0 && str[0] == '0' && k != 1)
			write(1, "and ", 4);
		print_number(str);
		if (ft_strcmp(str, "000") != 0 && j != 1)
			ft_print_separator_with_space(j);
		j--;
	}
	write(1, "\n", 1);
}
