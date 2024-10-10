/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-014.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 15:29:06 by btarhan           #+#    #+#             */
/*   Updated: 2024/07/14 21:01:46 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define N 4

void	printerror(void)
{
	write(1, "Error\n", 6);
}

void	initialize_views(int views[16], char **argv)
{
	int	i;

	i = 0;
	while (i < N * N)
	{
		views[i] = argv[1][i * 2] - '0';
		i++;
	}
}

int	func_control(char **av)
{
	int	i;
	int	space_count;
	int	int_count;

	i = 0;
	int_count = 0;
	space_count = 0;
	while (av[1][i] != '\0')
	{
		if (av[1][i] >= 49 && av[1][i] <= 52)
			int_count++;
		else if (av[1][i] == 32)
			space_count++;
		else
			return (0);
		i++;
	}
	if (i != 31)
		return (0);
	if ((int_count - space_count) != 1)
		return (0);
	return (1);
}

void	create_board(int board[N][N])
{
	int	i;
	int	j;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_board(int board[N][N])
{
	char	buffer[N * (N * 2)];
	int		index;
	int		i;
	int		j;

	i = 0;
	index = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			buffer[index++] = board[i][j] + '0';
			if (j != 3)
				buffer[index++] = ' ';
			j++;
		}
		buffer[index++] = '\n';
		i++;
	}
	write(1, buffer, index);
}
