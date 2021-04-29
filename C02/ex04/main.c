/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:18:38 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/21 17:28:43 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;
	char	*str2;

	str = "MAYUSCULAS";
	str2 = "minusculas";
	if (ft_str_is_lowercase(str) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	if (ft_str_is_lowercase(str2) == 1)
		printf("OK\n");
	else
		printf("KO\n");
	if (ft_str_is_lowercase("") == 1)
		printf("OK\n");
	else
		printf("KO\n");
	return (0);
}
