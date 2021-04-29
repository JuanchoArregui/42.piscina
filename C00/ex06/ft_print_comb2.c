/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combo2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 10:07:52 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/14 11:04:59 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = -1;
	while (++n1 <= 99)
	{
		n2 = n1;
		while (++n2 <= 99)
		{
			if (!((n1 == 0) && (n2 == 1)))
				write(1, ", ", 2);
			ft_putchar(n1 / 10 + 48);
			ft_putchar(n1 % 10 + 48);
			write(1, " ", 1);
			ft_putchar(n2 / 10 + 48);
			ft_putchar(n2 % 10 + 48);
		}
	}
}
