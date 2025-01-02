/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:48:17 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/18 14:55:40 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *s)
{
	short int	sign;
	int			result;

	result = 0;
	sign = 1;
	while (ft_isspace(*s))
		s++;
	if (*s == 45 || *s == 43)
	{
		if (*s++ == 45)
			sign *= -1;
	}
	while (*s && *s >= 48 && *s <= 57)
		result = result * 10 + (*s++ - 48);
	return (sign * result);
}
