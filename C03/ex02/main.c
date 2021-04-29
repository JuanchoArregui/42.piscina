/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:39:05 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/27 17:15:31 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src);

int	main (void)
{
	char	dest[226];
	char	src[35];

	strcpy(src, "junto");
	strcpy(dest, "separadooooooooo");
	printf("CADENA CON strcat: %s\n", strcat(dest, src));
	printf("CADENA CON ft_strcat: %s\n", ft_strcat(dest, src));
}
