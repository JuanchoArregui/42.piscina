/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:54:38 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 13:43:15 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	x;
	int	z;

	x = 0;
	z = size - 1;
	while (x < size / 2)
	{
		temp = tab[x];
		tab[x] = tab[z];
		tab[z] = temp;
		x++;
		z--;
	}
}
