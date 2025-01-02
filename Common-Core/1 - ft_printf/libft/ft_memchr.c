/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:44:48 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/11 14:15:45 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *str, int c, size_t len)
{
	while (len--)
		if (*((unsigned char *)str++) == (unsigned char)c)
			return (--str);
	return (NULL);
}
