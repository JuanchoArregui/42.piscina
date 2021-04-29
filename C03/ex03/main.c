/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:40:11 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/27 17:01:23 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	src[50];
	char	dest[50];

	strcpy(src, "si esto junta");
	strcpy(dest, "a ver ");
	strncat(dest, src, 14);
	printf("pegado inicial con strncat: %s\n", dest);
	ft_strncat(dest, src, 14);
	printf("Resultado duplicado con ft_strncat: %s", dest);
}
