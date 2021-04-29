/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 15:28:10 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/26 16:21:14 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[200];
	char	dest[2];

	strcpy(src, "este mi texto de pruebas que tiene 48 caracteres");
	printf("%s\n", src);
	printf("Aqui debe salirme un 48: %d\n", ft_strlcpy(dest, src, 14));
	printf("%s\n", dest);
	return (0);
}
