/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:18:38 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/26 12:56:41 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	origen[255];
	char	destino[255];

	strcpy(origen, "hola mundo");
	strcpy(destino, "kk");
	printf("la frase que tenemos al inicio en 'origen': %s\n", origen);
	printf("y le queremos pasar 4 caracteres.\n");
	ft_strncpy(destino, origen, 4);
	printf("me tiene que devolver 'hola': %s\n", destino);
	return (0);
}
