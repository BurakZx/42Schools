/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:03:14 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/08 15:03:14 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, void *src, size_t len)
{
	void	*ret;

	ret = dest;
	while (len--)
		*((unsigned char *)dest++) = *((unsigned char *)src++);
	return (ret);
}
