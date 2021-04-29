/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:30:58 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/20 15:54:55 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_get_index(int *array, int n)
{
	int	i;
	int	max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		if (array[i] == max)
			return (i - 1);
		else if (i == (n - 1) && array[i] < max)
			return (i);
		i++;
		max++;
	}
	return (-1);
}

void	ft_print_array(int *array, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(array[i] + 48);
		i++;
	}
}

void	ft_sum_array(int index, int *array, int n)
{
	int	i;

	i = index + 1;
	array[index]++;
	while (i < n)
	{
		array[i] = array[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	index;
	int	i;
	int	array[9];

	i = 0;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
	while (ft_get_index(array, n) != -1)
	{
		ft_print_array(array, n);
		index = ft_get_index(array, n);
		ft_sum_array(index, array, n);
		ft_putchar(',');
		ft_putchar(' ');
	}
	ft_print_array(array, n);
}
