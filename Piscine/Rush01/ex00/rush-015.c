/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-015.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:42:51 by btarhan           #+#    #+#             */
/*   Updated: 2024/07/14 21:01:48 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

void	place_all_from_up(int loc, int board[N][N]);

void	place_all_from_bottom(int loc, int board[N][N]);

void	place_all_from_left(int loc, int board[N][N]);

void	place_all_from_right(int loc, int board[N][N]);

void	place_single_from_up(int loc, int board[N][N]);

void	place_single_from_bottom(int loc, int board[N][N]);

void	place_single_from_left(int loc, int board[N][N]);

void	place_single_from_right(int loc, int board[N][N]);

int		check_top_view(int *top_view, int board[N][N]);

int		check_bottom_view(int *bottom_view, int board[N][N]);

int		check_left_view(int *left_view, int board[N][N]);

int		check_right_view(int *right_view, int board[N][N]);

void	placing_seperator(int loc, int board[N][N], int checker)
{
	if (checker)
	{
		if (loc <= 3)
			place_all_from_up(loc % 4, board);
		if (loc > 3 && loc <= 7)
			place_all_from_bottom(loc % 4, board);
		if (loc > 7 && loc <= 11)
			place_all_from_left(loc % 4, board);
		if (loc > 11 && loc <= 15)
			place_all_from_right(loc % 4, board);
	}
	else
	{
		if (loc <= 3)
			place_single_from_up(loc % 4, board);
		if (loc > 3 && loc <= 7)
			place_single_from_bottom(loc % 4, board);
		if (loc > 7 && loc <= 11)
			place_single_from_left(loc % 4, board);
		if (loc > 11 && loc <= 15)
			place_single_from_right(loc % 4, board);
	}
}

void	place_obvious_values(int *views, int board[N][N])
{
	int	i;

	i = 0;
	while (i < N * N)
	{
		if (views[i] == 4)
			placing_seperator(i, board, 1);
		else if (views[i] == 1)
			placing_seperator(i, board, 0);
		i++;
	}
}

int	check_views(int board[N][N], int *views)
{
	int	top_view[N];
	int	bottom_view[N];
	int	left_view[N];
	int	right_view[N];
	int	i;

	i = 0;
	while (i < N * N)
	{
		if (i < N)
			top_view[i] = views[i];
		else if (i < 2 * N)
			bottom_view[i - N] = views[i];
		else if (i < 3 * N)
			left_view[i - 2 * N] = views[i];
		else if (i < N * N)
			right_view[i - 3 * N] = views[i];
		i++;
	}
	i = ((check_top_view(top_view, board)
				&& check_bottom_view(bottom_view, board)
				&& check_left_view(left_view, board)
				&& check_right_view(right_view, board)));
	return (i);
}
