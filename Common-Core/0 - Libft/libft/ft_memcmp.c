/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:22:26 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/11 14:15:37 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *s1, void *s2, size_t len)
{
	while (*(unsigned char *)s1++ == *(unsigned char *)s2++)
		if (len-- == 1)
			return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
	return (*(unsigned char *)--s1 - *(unsigned char *)--s2);
}
