/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:30:31 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/21 17:32:32 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;
	char	*str2;

	str = "minusculas";
	str2 = "MAYUSCULAS";
	if (ft_str_is_uppercase(str) == 0)
		printf("OK\n");
	else
		printf("KO\n");
	if (ft_str_is_uppercase(str2) == 1)
		printf("OK\n");
	else
		printf("KO\n");
	if (ft_str_is_uppercase("") == 1)
		printf("OK\n");
	else
		printf("KO\n");
	return (0);
}
