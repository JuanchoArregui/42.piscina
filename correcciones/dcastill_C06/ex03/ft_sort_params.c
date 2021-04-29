/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 12:03:25 by dcastill          #+#    #+#             */
/*   Updated: 2021/04/28 15:57:48 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (s1 && s2)
	{
		while ((*(s1 + i) != '\0') || (*(s2 + i) != '\0'))
		{
			if (*(s1 + i) != *(s2 + i))
			{
				result = *(s1 + i) + *(s2 + i);
				break ;
			}
			i++;
		}
	}
	return (result);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*(str), 1);
		str++;
	}
	write(1, "\n", 1);
}

void	ft_putargs(int argc, char *argv[])
{
	int		n;

	n = 1;
	while (n < argc)
	{
		ft_putstr(*(argv + n));
		n++;
	}
}

void	ft_ordenarCad(int argc, char *argv[])
{
	int		actual;
	int		sig;
	char	*aux;

	actual = 1;
	while (actual < argc)
	{
		sig = actual + 1;
		while (sig < argc)
		{
			if (ft_strcmp(*(argv + actual), *(argv + sig)) > 0)
			{
				aux = *(argv + actual);
				*(argv + actual) = *(argv + sig);
				*(argv + sig) = aux;
			}
			sig++;
		}
		actual++;
	}
}

int	main (int argc, char *argv[])
{
	ft_ordenar(argc, argv);
	ft_putargs(argc, argv);
	return (0);
}
