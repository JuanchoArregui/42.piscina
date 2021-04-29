/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:46:08 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/27 15:41:45 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	*src;
	char	dst[15];
	char	*src2;
	char	dst2[15];

	dst[0] = 'k';
	dst[1] = 'k';
	dst2[0] = 'k';
	dst2[1] = 'k';
	src = "devakapaka";
	src2 = "devakapaka";
	printf ("--sobra tamaño en detino---\n");
	printf ("CON strlcat: %lu\n", strlcat(dst, src, 9));
	printf ("resultado en DESTINO: %s\n", dst);
	printf ("CON ft_strlcat: %u\n", ft_strlcat(dst2, src2, 9));
	printf ("resultado en DESTINO: %s\n", dst2);
	printf ("\n");
	return (0);
}
