/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:31:10 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 13:57:13 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size);

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
	array[0] = 10;
	array[1] = 20;
	array[2] = 30;
	array[3] = 40;
	array[4] = 50;
	printf("array orginal: \n");
	print_array(array, 5);
	ft_rev_int_tab(tab, 5);
	printf("array invertido: \n");
	print_array(array, 5);
	return (0);
}
