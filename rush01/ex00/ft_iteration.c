/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:13:22 by jjimenez          #+#    #+#             */
/*   Updated: 2021/04/18 21:13:09 by jjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_number(int	nb, int	search);
int	check_array_col(int	array[6][6], int	row_fix, int	search);
int	check_array_row(int	array[6][6], int	col_fix, int	search);
int	check_iteration(int	array[6][6]);

int	iteration_col(int	array[6][6], int	col)
{
	int	modif;
	int	row;

	modif = 0;
	while (col < 5)
	{
		row = 1;
		while (row < 5)
		{
			if (array[row][col] < 10)
				modif += check_array_row(array, col, array[row][col]);
			row++;
		}
		col++;
	}
	return (modif);
}

int	iteration_row(int	array[6][6], int	row)
{
	int	modif;
	int	col;

	modif = 0;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			if (array[row][col] < 10)
				modif += check_array_col(array, row, array[row][col]);
			col++;
		}
		row++;
	}
	return (modif);
}

int	apply_iteration(int	array[6][6])
{
	int	modif;
	int	iter;
	int	r;

	iter = 0;
	r = 0;
	while (r == 0 && iter < 16)
	{
		modif = 0;
		modif += iteration_row(array, 1);
		modif += iteration_col(array, 1);
		r = check_iteration(array);
		iter++;
	}
	return (r);
}

int	check_iteration(int	array[6][6])
{
	int	row;
	int	col;
	int r;

	row = 1;
	r = 1;
	while (row < 5)
	{
		col = 1;
		while (col < 5)
		{
			if (!(array[row][col] > 0 && array[row][col] < 5))
				r = 0;
			col++;
		}
		row++;
	}
	return (r);
}
