/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarregui <jarregui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 10:39:39 by jarregui          #+#    #+#             */
/*   Updated: 2021/04/19 09:22:01 by jarregui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int g_clues[4][4][4] = 
	{
		{
			{-1, -1, -1, -1},
			{4, 12, 12, 3},
			{4, 123, 13, 12},
			{4, 3, 2, 1},
		}, 
		{
			{3, 12, 12, 4},
			{123, 124, 124, 123},
			{123, 4, 23, 12},
			{-1, -1, -1, -1},
		},
		{
			{12, 13, 123, 4},
			{12, 23, 4, 123},
			{-1, -1, -1, -1},
			{-1, -1, -1, -1},
		},
		{
			{1, 2, 3, 4},
			{-1, -1, -1, -1},
			{-1, -1, -1, -1},
			{-1, -1, -1, -1},
		},
	};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	populate_array(int array[6][6], int size)
{
	int	row;
	int	col;

	row = 0;
	while (row < size)
	{
			col = 0;
		while ( col < size)
		{
			array[row][col] = 0;
			col++;
		}
	row++;
	}
}

void	print_array(int array[6][6], int ini, int end)
{
	int	row;
	int	col;

	row = ini;
	while (row <= end)
	{
			col = ini;
		while ( col <= end)
		{
			printf("%d ", array[row][col]);
			if (col == end)
				printf("\n");
			col++;
		}
	row++;
	}
}

void	set_constrains(int array[6][6], char *constrains )
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
}


//SIEMPRE QUE SEAN MENOS -1 SE DEVUELVE UN ERROR
void apply_clues(int array[6][6])
{
	int	row;
	int col;
	

	row = 1;
	while (row < 5)
	{	
		int clue;
		int old;
		int new;

		//printf("CONSTRAINS: %d %d \n", array[row][0], array[row][5]);
		clue = 0;
		while (clue < 4)
		{	
			old = array[row][clue + 1];
			//printf("old [%d][%d]: %d\n", row, (clue +1), old );
			new = g_clues[(array[row][0] - 1)][(array[row][5] - 1)][clue];
			//printf("new clue [%d][%d][%d]: %d\n", (array[row][0] - 1), (array[row][5] - 1), clue, new );
			array[row][clue + 1] = g_clues[(array[row][0] - 1)][(array[row][5] - 1)][clue];
			clue++;
		}
		printf("\n");
	row++;
	}

	col = 1;
	while (col < 5)
	{	
		int clue;
		int old;
		int new;

		//printf("CONSTRAINS: %d %d \n", array[row][0], array[row][5]);
		clue = 0;
		while (clue < 4)
		{	
			old = array[clue + 1][col];
			//printf("old [%d][%d]: %d\n", (clue +1), col, old );
			new = g_clues[(array[0][col] - 1)][(array[5][col] - 1)][clue];

			//INCOMPATIBILIDAD
			if (old > 10)
				array[clue + 1][col] = new;
			clue++;
		}
		printf("\n");
	col++;
	}
};


int check_number(int nb, int search){

	if ((nb % 10) == search)
		nb = nb/10;
	if ((nb / 100) == search)
		nb = nb - 100*search;
	if (((nb / 10) % 10)  == search)
		nb = (nb % 10) + (nb/100)*10;

	return (nb);
}

int check_array_col(int array[6][6], int row_fix, int search){
	int col;
	int new_nb;
	int modif;

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

int check_array_row(int array[6][6], int col_fix, int search){
	int row;
	int new_nb;
	int modif;

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


int iteration_col(int array[6][6], int col)
{
	int	modif;
	int row;

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
};

int iteration_row(int array[6][6], int row)
{
	int	modif;
	int col;

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
};

void apply_iteration(int array[6][6])
{
	int modif;
	int iter;

	modif = 0;
	modif += iteration_row(array, 1);
				printf("\nSudoku iteration ROWS:\n");
				print_array(array, 1, 4);
	modif += iteration_col(array, 1);
				printf("\nSudoku iteration COLS:\n");
				print_array(array, 1, 4);
				
	printf("\n modificación: %d\n", modif);
	
	if (modif > 0)
		apply_iteration(array);
};






//CHECK INTEGRITY
int check_rows_left(int array[6][6], int row, int col)
{
	int constrain;
	int height;

	while (row < 5)
	{	
		col = 1;
		constrain = 1;
		height = array[row][col];
		while (col < 4)
		{	
			if (height < array[row][col + 1])
			{
				height = array[row][col + 1];
				constrain ++;
			}
			col++;
		}
		if ( array[row][0] != constrain)
			return (1);
		row++;
	}
	return (0);
};

int check_rows_right(int array[6][6], int row, int col)
{
	int constrain;
	int height;

	while (row < 5)
	{	
		col = 4;
		constrain = 1;
		height = array[row][col];
		while (col > 1)
		{	
			if (height < array[row][col - 1])
			{
				height = array[row][col - 1];
				constrain ++;
			}
			col--;
		}
		if ( array[row][5] != constrain)
			return (1);
		row++;
	}
	return (0);
};

int check_cols_up(int array[6][6], int row, int col)
{
	int constrain;
	int height;

	while (col < 5)
	{	
		row = 1;
		constrain = 1;
		height = array[row][col];
		while (row < 4)
		{	
			if (height < array[row + 1][col])
			{
				height = array[row +1 ][col];
				constrain ++;
			}
			row++;
		}
		if ( array[0][col] != constrain)
			return (1);
		col++;
	}
	return (0);
};

int check_cols_down(int array[6][6], int row, int col)
{
	int constrain;
	int height;

	while (col < 5)
	{	
		row = 4;
		constrain = 1;
		height = array[row][col];
		while (row > 1)
		{	
			if (height < array[row - 1][col])
			{
				height = array[row - 1][col];
				constrain ++;
			}
			row--;
		}
		if ( array[5][col] != constrain)
			return (1);
		col++;
	}
	return (0);
};

void check_sudoku(int array[6][6])
{
	int error;

	error = 0;
	error += check_rows_left(array, 1, 1);
	error += check_rows_right(array, 1, 1);

	error += check_cols_up(array, 1, 1);
	error += check_cols_down(array, 1, 1);
	if (error > 0)
	{
		//porner aquí la salida que marca error
		printf("\nError, El sudoku esta MALLLLLL\n");
	} else{
		printf("\nEl sudoku esta Ok\n");
	}
}









//Nota compilar así: gcc main.c -o rush-01
//ejecutar con:		./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" 
int	main(int argc, char **argv)
{
	int array[6][6];

	if (argc == 2)
	{
		populate_array(array, 6);
		set_constrains(array, argv[1]);
		printf("\nSudoku with initial constrains:\n");
		print_array(array, 0, 5);

		apply_clues(array);
		printf("\nSudoku with first clues:\n");
		print_array(array, 0, 5);


		printf("\n");
		printf("\nSudoku:\n");
		print_array(array, 1, 4);

		apply_iteration (array);
		printf("\n");
		printf("\nSudoku i1:\n");
		print_array(array, 1, 4);


		check_sudoku(array);
		
	}

	return (0);
}



