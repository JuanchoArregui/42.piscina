/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:18:38 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/21 15:37:35 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	origen[256];
	char	destino[256];

	strcpy(origen, "hola mundo");
	strcpy(destino, "kk");
	printf("la frase que tenemos al inicio en 'origen': %s\n", origen);
	printf("la frase que tenemos al inicio en 'destino': %s\n", destino);
	ft_strcpy(destino, origen);
	printf("la frase tras *ft_strcpy en 'destino': %s\n", destino);
	return (0);
}
