/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-016.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:39:19 by btarhan           #+#    #+#             */
/*   Updated: 2024/07/14 21:33:13 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int	check_views(int board[N][N], int *views);

int	is_valid(int board[N][N], int row, int col, int num, int *views);

int	solve (int board[N][N], int *views);

int	try_solving(int board[N][N], int row, int col, int num, int *views)
{
	while (num <= N)
	{
		if (is_valid(board, row, col, num, views))
		{
			board[row][col] = num;
			if(solve(board, views))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int	solve (int board[N][N], int *views)
{
	int	row;
	int	col;
	int empty;

	row = 0;
	while (row < N)
	{
		col = 0;
		while (col < N)
		{
			if(board[row][col] == 0)
			{
				empty = 1;
				break ;
			}
			col++;
		}
		if (empty)
			break ;
		row++;
	}
	if (!empty)
		return (check_views(board, views));
	try_solving(board, row, col, 1, views);
	return (0);
}