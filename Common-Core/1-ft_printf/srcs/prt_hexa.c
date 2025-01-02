/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:34:14 by btarhan           #+#    #+#             */
/*   Updated: 2025/01/02 17:48:04 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	h_digits(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		digits += 1;
		n /= 16;
	}
	return (digits);
}

static void	put_hexa(unsigned int nbr, unsigned char upper_case)
{
	static char	upper_digits[] = "0123456789ABCDEF";
	static char	lower_digits[] = "0123456789abcdef";

	if (nbr >= 16)
		put_hexa((nbr / 16), upper_case);
	if (upper_case == 1)
		write(1, &upper_digits[nbr % 16], 1);
	else
		write(1, &lower_digits[nbr % 16], 1);
}

int	prt_hexa(unsigned int nbr, unsigned char upper_case)
{
	put_hexa(nbr, upper_case);
	return (h_digits(nbr));
}
