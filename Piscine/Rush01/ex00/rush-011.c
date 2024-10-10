/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-011.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 12:33:46 by btarhan           #+#    #+#             */
/*   Updated: 2024/07/14 12:33:46 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

void	place_all_from_up(int loc, int board[N][N])
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (board[loc][i] == 0)
			board[loc][i] = i + 1;
		i++;
	}
}

void	place_all_from_bottom(int loc, int board[N][N])
{
	int	i;

	i = N;
	while (0 < i)
	{
		if (board[loc][i] == 0)
			board[loc][i] = N - i + 1;
		i--;
	}
}

void	place_all_from_left(int loc, int board[N][N])
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (board[i][loc] == 0)
			board[i][loc] = i + 1;
		i++;
	}
}

void	place_all_from_right(int loc, int board[N][N])
{
	int	i;

	i = N;
	while (0 < i)
	{
		if (board[loc][i] == 0)
			board[loc][i] = N - i + 1;
		i--;
	}
}
