/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-012.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:18:14 by btarhan           #+#    #+#             */
/*   Updated: 2024/07/14 15:18:53 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

void	place_single_from_up(int loc, int board[N][N])
{
	if (board[loc][0] == 0)
		board[loc][0] = 4;
}

void	place_single_from_bottom(int loc, int board[N][N])
{
	if (board[loc][N - 1] == 0)
		board[loc][N - 1] = 4;
}

void	place_single_from_left(int loc, int board[N][N])
{
	if (board[0][loc] == 0)
		board[0][loc] = 4;
}

void	place_single_from_right(int loc, int board[N][N])
{
	if (board[N - 1][loc] == 0)
		board[N - 1][loc] = 4;
}
