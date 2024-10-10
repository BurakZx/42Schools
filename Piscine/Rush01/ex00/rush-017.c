/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-017.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:13:01 by btarhan           #+#    #+#             */
/*   Updated: 2024/07/14 21:14:45 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int	check_views(int board[N][N], int *views);

int	is_valid(int board[N][N], int row, int col, int num)
{
	int temp;

	temp = 0;
	while (temp < N)
	{
		if (board[row][temp] == num)
			return (0);
		temp++;
	}
	temp = 0;
	while (temp < N)
	{
		if (board[temp][col] == num)
			return (0);
		temp++;
	}
    return (1);
}