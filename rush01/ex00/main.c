/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:39:39 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/18 21:47:03 by jjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	clue0(int	clues[4][4][4]);
void	clue1(int	clues[4][4][4]);
void	clue2(int	clues[4][4][4]);
void	clue3(int	clues[4][4][4]);
int		check_number(int	nb, int	search);
int		check_array_col(int	array[6][6], int	row_fix, int	search);
int		check_array_row(int	array[6][6], int	col_fix, int	search);
int		iteration_col(int	array[6][6], int	col);
int		iteration_row(int	array[6][6], int	row);
int		apply_iteration(int	array[6][6]);
int		check_iteration(int	array[6][6]);
int		is_compatible(int	nb_a, int	nb_b);
int		apply_clues_row(int	array[6][6], int	clues[4][4][4]);
int		apply_clues_col(int	array[6][6], int	clues[4][4][4]);
int		get_solution(int	array[6][6], int	clues[4][4][4]);

void	populate_array(int array[6][6], int size)
{
	int	row;
	int	col;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			array[row][col] = 0;
			col++;
		}
		row++;
	}
}

void	print_array(int array[6][6], int ini, int end)
{
	int		row;
	int		col;
	char	c;

	row = ini;
	while (row <= end)
	{
		col = ini;
		while (col <= end)
		{
			if (!(array[row][col] > 0 && array[row][col] < 5))
				return ;
			c = array[row][col] + 48;
			write (1, &c, 1);
			if (col == end)
				write (1, "\n", 1);
			else
				write (1, " ", 1);
			col++;
		}
		row++;
	}
}

int	check_argv(char	*constrains)
{
	int	i;

	i = 0;
	while (*(constrains + i) != '\0')
	{
		if (((i + 1) % 2) == 1)
		{
			if (!(*(constrains + i) > 48 && *(constrains + i) < 53))
				break ;
		}
		else
		{
			if (*(constrains + i) != 32)
				break ;
		}
		i++;
	}
	if (i != 31)
		return (0);
	return (1);
}

void	set_constrains(int array[6][6], char *constrains, int	clues[4][4][4])
{
	array[0][1] = constrains[0] - 48;
	array[0][2] = constrains[2] - 48;
	array[0][3] = constrains[4] - 48;
	array[0][4] = constrains[6] - 48;
	array[5][1] = constrains[8] - 48;
	array[5][2] = constrains[10] - 48;
	array[5][3] = constrains[12] - 48;
	array[5][4] = constrains[14] - 48;
	array[1][0] = constrains[16] - 48;
	array[2][0] = constrains[18] - 48;
	array[3][0] = constrains[20] - 48;
	array[4][0] = constrains[22] - 48;
	array[1][5] = constrains[24] - 48;
	array[2][5] = constrains[26] - 48;
	array[3][5] = constrains[28] - 48;
	array[4][5] = constrains[30] - 48;
	clue0(clues);
	clue1(clues);
	clue2(clues);
	clue3(clues);
}

int	main(int argc, char **argv)
{
	int	array[6][6];
	int	check;
	int	clues[4][4][4];

	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (0);
	}	
	populate_array(array, 6);
	check = check_argv(argv[1]);
	if (check == 0)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	set_constrains(array, argv[1], clues);
	check = get_solution(array, clues);
	if (check == 0)
	{
		write (1, "Error\n", 6);
		return (0);
	}
	print_array(array, 1, 4);
	return (0);
}
