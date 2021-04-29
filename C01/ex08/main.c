/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 13:45:26 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 13:57:41 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size);

void	print_array(int *tab, int size)
{	
	int	n;

	n = 0;
	while (n < size)
	{
		printf("%d ", tab[n]);
		n++;
	}
	printf("\n");
}

int	main(void)
{
	int	*tab;
	int	array[5];

	tab = array;
	array[0] = 30;
	array[1] = 10;
	array[2] = 40;
	array[3] = 50;
	array[4] = 10;
	printf("array orginal: \n");
	print_array(array, 5);
	ft_sort_int_tab(tab, 5);
	printf("array ordenado: \n");
	print_array(array, 5);
	return (0);
}
