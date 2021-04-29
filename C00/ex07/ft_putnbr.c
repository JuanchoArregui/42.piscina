/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 11:07:25 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/21 10:22:37 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
