#include "rush02.h"

int	check_input_args(int argc)
{
	if (argc < 2 || argc > 3)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	else
		return (1);
}

void	ft_remove_start_zeros(char *str_nb, int nb, int str_length)
{
	int	i;

	i = str_length;
	str_nb[i] = '\0';
	while (i > 0)
	{
		i--;
		str_nb[i] = 48 + (nb % 10);
		nb /= 10;
	}
}

int	check_number_value(char *str_nb, int str_length, int left_zeros)
{
	int long	nb;
	int			n;
	int			length;

	if ((str_length - left_zeros) > 10)
		return (0);
	n = 1;
	nb = 0;
	length = 0;
	while (str_length > 0)
	{
		nb += (str_nb[str_length - 1] - 48) * n;
		n *= 10;
		str_length--;
		length++;
	}
	if (nb < 0 || nb > 4294967295)
		return (0);
	str_length = length - left_zeros;
	ft_remove_start_zeros(str_nb, nb, str_length);
	return (str_length);
}

int	check_input_number(char *str_nb)
{
	int	i;
	int	str_length;
	int	left_zeros;

	i = 0;
	left_zeros = -1;
	while (str_nb[i] != '\0')
	{
		if (str_nb[i] < '0' || str_nb[i] > '9')
		{
			write(2, "Error\n", 6);
			return (0);
		}
		if (str_nb[i] > '0' && left_zeros == -1)
			left_zeros = i;
		i++;
	}
	str_length = i;
	i = str_length - left_zeros;
	if (!check_number_value(str_nb, str_length, left_zeros))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (i);
}
