/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 16:18:38 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/21 17:10:29 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	char	*str2;

	str = "EstEesMij0dido string";
	str2 = "lkjdsfvyiuyyHJGJHFTDTJHV";
	printf("Esto debe devolver 0: %d\n", ft_str_is_alpha(str));
	printf("Esto debe devolver 1: %d\n", ft_str_is_alpha(str2));
	printf("Esto tb debe devolver 1: %d\n", ft_str_is_alpha(""));
	return (0);
}
