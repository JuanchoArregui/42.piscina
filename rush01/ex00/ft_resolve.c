/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 21:27:11 by jjimenez          #+#    #+#             */
/*   Updated: 2021/04/18 21:47:07 by jjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_number(int	nb, int	search);
int	check_array_col(int	array[6][6], int	row_fix, int	search);
int	check_array_row(int	array[6][6], int	col_fix, int	search);
int	apply_iteration(int	array[6][6]);

int	is_compatible(int	nb_a, int	nb_b)
{
	int	it;

	if (nb_a < 1 || nb_b < 1)
		return (0);
	if ((nb_a / 100) > 0)
	{
		it = check_number(nb_a / 100, nb_b);
		if (nb_b == it)
			return (0);
	}
	if (((nb_a / 10) % 10) > 0)
	{
		it = check_number(((nb_a / 10) % 10), nb_b);
		if (nb_b == it)
			return (0);
	}
	if ((nb_a % 10) > 0)
	{
		it = check_number((nb_a % 10), nb_b);
		if (nb_b == it)
			return (0);
	}

	return (nb_b);
}

int	apply_clues_row(int	array[6][6], int	clues[4][4][4])
{
	int	row;
	int	col;
	int	new;

	row = 1;
	while (row < 5)
	{
		col = 0;
		while (col < 4)
		{
			new = clues[(array[row][0] - 1)][(array[row][5] - 1)][col];
			array[row][col + 1] = new;
			if (array[row][col + 1] < 1)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int	apply_clues_col(int	array[6][6], int	clues[4][4][4])
{
	int	row;
	int	col;
	int	new;
	int	old;

	col = 1;
	while (col < 5)
	{
		row = 0;
		while (row < 4)
		{
			old = array[row + 1][col];
			new = clues[(array[0][col] - 1)][(array[5][col] - 1)][col - 1];
			new = is_compatible(old, new);
			if (new < 1)
				return (0);
			row++;
		}
		col++;
	}
	return (1);
}

int	get_solution(int	array[6][6], int	clues[4][4][4])
{
	int	check;

	check = apply_clues_row (array, clues);	
	if (check == 0)
		return (0);
	check = apply_clues_col (array, clues);
	if (check == 0)
		return (0);
	check = apply_iteration (array);
	if (check == 0)
		return (0);
	return (1);
}
