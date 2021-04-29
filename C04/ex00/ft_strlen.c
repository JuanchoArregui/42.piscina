/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 09:29:29 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/29 11:59:59 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/* int	main(void)
{
	printf("longitud con strlen: %lu\n", strlen("hola \nque ase"));
	printf("longitud con ft_strlen: %d\n", ft_strlen("hola \nque ase"));
	return (0);
} */