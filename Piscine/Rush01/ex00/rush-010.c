/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-010.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:44:54 by btarhan           #+#    #+#             */
/*   Updated: 2024/07/14 21:04:50 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

void	printerror(void);

void	initialize_views(int views[16], char **argv);

int		func_control(char **av);

void	create_board(int board[N][N]);

void	print_board(int board[N][N]);

void	place_obvious_values(int *views, int board[N][N]);

int		check_views(int board[N][N], int *views);

int	main(int argc, char **argv)
{
	int	views[16];
	int	board[N][N];

	if (argc != 2 || !func_control(argv))
	{
		printerror();
		return (0);
	}
	initialize_views(views, argv);
	create_board(board);
	place_obvious_values(views, board);
	if (check_views(board, views))
		print_board(board);
	else
		printerror();
	return (0);
}
