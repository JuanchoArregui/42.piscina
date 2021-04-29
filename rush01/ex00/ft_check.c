/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:14:17 by jjimenez          #+#    #+#             */
/*   Updated: 2021/04/18 21:00:38 by jjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_number(int	nb, int	search)
{
	if ((nb % 10) == search)
		nb = nb / 10;
	if ((nb / 100) == search)
		nb = nb - 100 * search;
	if (((nb / 10) % 10) == search)
		nb = (nb % 10) + (nb / 100) * 10;
	return (nb);
}

int	check_array_col(int	array[6][6], int	row_fix, int	search)
{
	int	col;
	int	new_nb;
	int	modif;

	modif = 0;
	col = 1;
	while (col < 5)
	{
		if (array[row_fix][col] > 10)
		{
			new_nb = check_number(array[row_fix][col], search);
			if (new_nb != array[row_fix][col])
				modif += 1;
			array[row_fix][col] = new_nb;
		}
		col++;
	}
	return (modif);
}

int	check_array_row(int	array[6][6], int	col_fix, int	search)
{
	int	row;
	int	new_nb;
	int	modif;

	modif = 0;
	row = 1;
	while (row < 5)
	{
		if (array[row][col_fix] > 10)
		{
			new_nb = check_number(array[row][col_fix], search);
			if (new_nb != array[row][col_fix])
				modif += 1;
			array[row][col_fix] = new_nb;
		}
		row++;
	}
	return (modif);
}
