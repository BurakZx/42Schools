/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:48:17 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/08 00:48:17 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *s)
{
	short int	sign;
	int			result;

	result = 0;
	sign = 1;
	if (*s == 45)
	{
		sign = -1;
		s++;
	}
	while (*s && *s >= 48 && *s <= 57)
		result = result * 10 + (*s++ - 48);
	return (sign * result);
}
