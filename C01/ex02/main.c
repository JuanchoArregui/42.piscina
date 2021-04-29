/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 11:33:20 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 12:15:23 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 50;
	printf("valor de a: %d\n", a);
	printf("valor de b: %d\n", b);
	ft_swap(&a, &b);
	printf("nuevo valor de a: %d\n", a);
	printf("nuevo valor de b: %d\n", b);
	return (0);
}
