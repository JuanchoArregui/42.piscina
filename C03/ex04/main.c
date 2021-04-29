/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:46:08 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/29 10:14:51 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find);

int	main (void)
{
	printf ("--con coincidencia---\n");
	printf ("CON strstr: %s\n", strstr("holaloco", "lo"));
	printf ("CON ft_strstr: %s\n", ft_strstr("holaloco", "lo"));
	printf ("\n");
	printf ("--SIN coincidencia---\n");
	printf ("CON strstr: %s\n", strstr("holaloco", "kk"));
	printf ("CON ft_strstr: %s\n", ft_strstr("holaloco", "kk"));
}
