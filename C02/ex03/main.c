/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:18:38 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/21 17:15:06 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;
	char	*str2;

	str = "O123456789";
	str2 = "0123456789";
	printf("Esto debe devolver 0: %d\n", ft_str_is_numeric(str));
	printf("Esto debe devolver 1: %d\n", ft_str_is_numeric(str2));
	printf("Esto tb debe devolver 1: %d\n", ft_str_is_numeric(""));
	return (0);
}
