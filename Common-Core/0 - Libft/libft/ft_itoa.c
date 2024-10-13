/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:41:41 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/13 16:45:21 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*alloc_figures(int n)
{
	int		len;
	char	*str;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0 && len++ != -1)
		n /= 10;
	str = (char *)malloc(--len);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int		nbr;
	char	*ptr;

	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		return ("0");
	ptr = alloc_figures(n);
	if (!ptr)
		return (NULL);
	nbr = n;
	if (n < 0)
		nbr *= -1;
	while (nbr > 0)
	{
		*--ptr = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (n < 0)
		*--ptr = '-';
	return (ptr);
}
