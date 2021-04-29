/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:24:17 by jnaftana          #+#    #+#             */
/*   Updated: 2021/04/28 19:52:30 by jnaftana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *a)
{
	while (*a)
	{
		write(1, a, 1);
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	xd;

	xd = 1;
	while (xd != argc)
	{
		ft_putstr(argv[xd]);
		xd++;
		write(1, "\n", 1);
	}
	return (0);
}
