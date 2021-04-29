/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:33:50 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/27 16:52:11 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	a[10];
	char	b[8];

	strcpy(a, "0123456");
	strcpy(b, "012345");
	printf("RESULTADO CON strcmp: %i\n", strcmp(a, b));
	printf("RESULTADO CON ft_strcmp: %i\n", ft_strcmp(a, b));
}
