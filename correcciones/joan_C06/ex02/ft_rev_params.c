/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnaftana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 14:38:15 by jnaftana          #+#    #+#             */
/*   Updated: 2021/04/28 18:46:05 by jnaftana         ###   ########.fr       */
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
	int	rev;

	rev = 0;
	while (argc - rev - 1 != 0)
	{
		ft_putstr(argv[argc - rev - 1]);
		rev++;
		write (1, "\n", 1);
	}
	return (0);
}
