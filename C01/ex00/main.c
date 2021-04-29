/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 09:43:45 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 09:50:33 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	test;

	test = 33;
	printf("dirección de test: %p\n", &test);
	printf("valor de test: %d\n", test);
	ft_ft(&test);
	printf("nuevo valor: %d\n", test);
	return (0);
}
