/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_funtions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjimenez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 20:14:17 by jjimenez          #+#    #+#             */
/*   Updated: 2021/04/18 21:00:38 by jjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	clue0(void);
void	clue1(void);
void	clue2(void);
void	clue3(void);
int	check_number(int	nb, int	search);
int	check_array_col(int	array[6][6], int	row_fix, int	search);
int	check_array_row(int	array[6][6], int	col_fix, int	search);
int	iteration_col(int	array[6][6], int	col);
int	iteration_row(int	array[6][6], int	row);
void	apply_iteration(int	array[6][6]);
int	check_iteration(int	array[6][6]);
int	is_compatible(int	nb_a, int	nb_b);
int	apply_clues_row(int	array[6][6]);
int	apply_clues_col(int	array[6][6]);
int	get_solution(int	array[6][6]);
