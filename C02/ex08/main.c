/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:30:31 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/25 10:40:17 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	*str;

	str = (char *)malloc(100);
	strcpy(str, "AQU1habiaTEXTOy_db3_salir # TODOen minusculas");
	printf("%s\n", str);
	ft_strlowcase(str);
	printf("%s\n", str);
	free(str);
	return (0);
}
