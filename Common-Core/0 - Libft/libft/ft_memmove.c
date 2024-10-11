/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:41:24 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/11 14:15:29 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*casted_dest;
	const unsigned char	*casted_src;

	casted_dest = (unsigned char *)dest;
	casted_src = (const unsigned char *)src;
	if (casted_dest < casted_src)
		while (n--)
			*casted_dest++ = *casted_src++;
	else
	{
		casted_dest += n;
		casted_src += n;
		while (n--)
			*(--casted_dest) = *(--casted_src);
	}
	return (dest);
}
