/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:30:47 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/27 15:44:59 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char			*string;
	unsigned int	size;

	string = "Bonjour les aminches\t\n\tc  est fou.tout.ce qu on peut faire avec...print_memory....lol.lol. .";
	size = 92;
	ft_print_memory(string, size);

	ft_print_memory("kk", size);
	ft_print_memory("kk", 0);
	char str1[1] = {138};
	ft_print_memory(str1, 1);
	char str2[2] = {23, 59};
	ft_print_memory(str2, 2);
	ft_print_memory("è░┤", 3);
	ft_print_memory("═╦►{", 4);
}
