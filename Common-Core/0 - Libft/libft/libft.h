/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 01:04:53 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/08 01:04:53 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

int				ft_atoi(char *s);
int				ft_isascii(char c);
int				ft_isalpha(char c);
int				ft_isdigit(char c);
int				ft_isprint(char c);
void			ft_putchar(char c);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
char			ft_tolower(char c);
char			ft_toupper(char c);
unsigned int	ft_strlen(char *s);
#endif
