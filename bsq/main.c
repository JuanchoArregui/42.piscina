#include<headers.h>

int	main(int argc, char *argv[])
{
	int		i;
	int		file;
	int		size;
	char	*map;
	char	buffer[BUFFER_SIZE + 1];

	i = 0;
	size = 0;
	//1º chequear si no hay argumentos la entrada
	if (argc == 1)
		ft_stdin(file); //y esto devería añadir a *argv los que le pasemos por la entrada.
	
	//2º una vez tenemos la lista de argumentos, los cheamos:
	while (++i < argc)
	{
		
		//2-A: 1º chequeamos que se pueda abrir (Hay que hacerlo, retonar 0 si error o 1 si se pueda abrir)
		if (!fn_map_check_open(argv[i]))
			ft_putstr("map error\n");
		//2-B: 2º chequeamos que se pueda abrir
		if (!fn_map_check_valid(argv[i]))
		//2-B_ 2º chequeamos el contenido del mapa y que cumpla el formato
		else if (!fn_map_check_valid(argv[i]))
			ft_putstr("map error\n");
		else
		{
			//3º crear el array sobre el que vamos a trabajar (con 0 y 1, y guardando los caracteres de impresión)

			//4º buscar solución iterando

			//5º modificar el array asignando la souciuón a las casillas correspondientes

			//6º imprimir el array trasponiendo los 1, 0, -1 a los caracteres de impresión
		}
		close(file);
		ft_putchar('\n');
	}
	return (0);
}
