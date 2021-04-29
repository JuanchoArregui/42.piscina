/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:46:34 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 13:08:07 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "Esta cadena tiene 32 caracteres!";
	printf("str = %s\n", str);
	printf("longitud = %d\n", ft_strlen(str));
	return (0);
}
