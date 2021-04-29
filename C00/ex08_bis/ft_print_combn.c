/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 09:36:42 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/22 09:46:32 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* NOTA: FUNCIONA BIEN CUANDO SE LLAMA UNA SOLA VEZ A ft_print_combn, 
pero si en el mismo main queremos llamar con cada número algo se pisa y sale mal....
revisar que variable estamos pisando!!! */

/* Y También sale mal la función de chequear la como la segunda vez... 
darle una vuelta
pero el codigo en cada tramo es correcto */



#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int nb, int n)
{
	n--;
	if (0 < n)
		print_number(nb / 10, n);
	ft_putchar(nb % 10 + '0');
}

void	check_number(int nb, int n)
{
	int		 prev;
	int		 pos;
	int		 nb_check;
	static int  comma = 0;

	pos = 0;
	nb_check = nb;
	prev = (nb % 10) + 1;
	while (pos<n)
	{
		if ((nb_check % 10) >= prev)
			return;
		else
		{
			prev = nb_check % 10;
			nb_check /= 10;
			pos++;
		}
	}
	if ( comma == 0)
		comma++;
	else
		write(1, ", ", 2);
	print_number(nb, n);
}

void ft_print_combn(int n)
{
	static int max = 1;
	int nb;
	int pow;
		
	nb = 0;
	pow = n;
	while (0 < pow)
	{
		max *= 10;
		pow--;
	}
	while ( nb < max)
	{
		check_number(nb, n);
		nb++;
	}
}