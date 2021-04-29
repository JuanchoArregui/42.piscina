/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:34:02 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/26 15:41:29 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main (void)
{
	printf ("CADENA CON strncmp: %i\n", strncmp ("holab", "holaa", 6));
	printf ("CADENA CON ft_strncmp: %i\n", ft_strncmp ("holab", "holaa", 6));
}
