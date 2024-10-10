/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:44:48 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/08 14:44:48 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(void *str, int c, size_t len)
{
	while (len--)
		if (*((unsigned char *)str++) == (unsigned char)c)
			return (--str);
	return (NULL);
}
