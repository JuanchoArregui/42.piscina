/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:55:15 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 13:56:16 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		temp = tab[x];
		y = x + 1;
		while (y < size)
		{
			if (tab[y] < temp)
			{
				temp = tab[y];
				tab[y] = tab[x];
				tab[x] = temp;
			}
			y++;
		}
		x++;
	}
}
