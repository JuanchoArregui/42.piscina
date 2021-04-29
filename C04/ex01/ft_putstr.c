/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 09:29:37 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/28 09:29:52 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* int	main(void)
{
	printf("impresión con puts: \n");
	puts("\"hola \nque ase\"");
	printf("longitud con ft_putstr: \n");
	ft_putstr("\"hola \nque ase\"");
	return (0);
} */
