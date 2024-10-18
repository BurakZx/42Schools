/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:22:26 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/18 14:04:42 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t len)
{
	if (!len)
		return (0);
	while (*(unsigned char *)s1++ == *(unsigned char *)s2++)
		if (len-- == 1)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
}
