/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:17:33 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 12:36:24 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("valores a dividir: %d y %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("resultado div = %d\n", a);
	printf("mod = %d\n", b);
	return (0);
}
