/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-013.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:30:18 by btarhan           #+#    #+#             */
/*   Updated: 2024/07/14 17:33:54 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int	check_top_view(int *top_view, int board[N][N])
{
	int	row;
	int	col;
	int	counter;
	int	max_height;

	col = 0;
	while (col < N)
	{
		row = 0;
		max_height = 0;
		counter = 0;
		while (row < N)
		{
			if (board[row][col] > max_height)
			{
				max_height = board[row][col];
				counter++;
			}
			row++;
		}
		if (counter != top_view[col])
			return (0);
		col++;
	}
	return (1);
}

int	check_bottom_view(int *bottom_view, int board[N][N])
{
	int	row;
	int	col;
	int	counter;
	int	max_height;

	col = 0;
	while (col < N)
	{
		row = N - 1;
		max_height = 0;
		counter = 0;
		while (row >= 0)
		{
			if (board[row][col] > max_height)
			{
				max_height = board[row][col];
				counter++;
			}
			row--;
		}
		if (counter != bottom_view[col])
			return (0);
		col++;
	}
	return (1);
}

int	check_left_view(int *left_view, int board[N][N])
{
	int	row;
	int	col;
	int	counter;
	int	max_height;

	row = 0;
	while (row < N)
	{
		col = 0;
		max_height = 0;
		counter = 0;
		while (col < N)
		{
			if (board[row][col] > max_height)
			{
				max_height = board[row][col];
				counter++;
			}
			col++;
		}
		if (counter != left_view[row])
			return (0);
		row++;
	}
	return (1);
}

int	check_right_view(int *right_view, int board[N][N])
{
	int	row;
	int	col;
	int	counter;
	int	max_height;

	row = 0;
	while (row < N)
	{
		col = N - 1;
		max_height = 0;
		counter = 0;
		while (col >= 0)
		{
			if (board[row][col] > max_height)
			{
				max_height = board[row][col];
				counter++;
			}
			col--;
		}
		if (counter != right_view[row])
			return (0);
		row++;
	}
	return (1);
}
