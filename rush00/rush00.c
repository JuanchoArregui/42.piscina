/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evangeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 14:59:01 by evangeli          #+#    #+#             */
/*   Updated: 2021/04/11 17:39:20 by evangeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	yn;
	int	xn;

	yn = 1;
	while (yn <= y)
	{
		xn = 1;
		while (xn <= x)
		{
			if ((yn == 1 || yn == y) && (xn == 1 || xn == x))
				ft_putchar('o');
			else if ((yn == 1 || yn == y) && (xn > 1 && xn < x))
				ft_putchar('-');
			else if ((xn == 1 || xn == x) && (yn > 1 && yn < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			xn++;
		}
		ft_putchar('\n');
		yn++;
	}
}
