/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:03:14 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/18 18:10:05 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	void	*ret;

	if (!dest && !src)
		return (NULL);
	ret = dest;
	while (len--)
		*((unsigned char *)dest++) = *((unsigned char *)src++);
	return (ret);
}
