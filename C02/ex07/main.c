/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 17:30:31 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/25 10:45:50 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	*str;

	str = (char *)malloc(100);
	strcpy(str, "&&&& AQU1habia TEXTOynum3r0y_db3_salir#TODO en MaYusculas!");
	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
	free(str);
	return (0);
}
