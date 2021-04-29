/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:22:46 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 12:50:21 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	str[5];

	str[0] = 'h';
	str[1] = 'o';
	str[2] = 'l';
	str[3] = 'a';
	str[4] = '!';
	ft_putstr(str);
	return (0);
}
