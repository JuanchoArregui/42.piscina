/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 09:30:12 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/29 12:00:15 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		long_nb = -long_nb;
		ft_putchar('-');
	}
	if (long_nb >= 10)
		ft_putnbr(long_nb / 10);
	ft_putchar(48 + long_nb % 10);
}

/* int	main(void)
{
	printf("Número a imprimir con ft_putnbr: \"-2147483648\":\n");
	ft_putnbr(-2147483648);
	return (0);
}
 */