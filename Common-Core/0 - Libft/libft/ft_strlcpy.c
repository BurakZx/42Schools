/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:05:12 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/08 16:05:12 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	ret;

	ret = ft_strlen(src);
	if (!size)
		return (ret);
	while (--size && *src)
		*dest++ = *src++;
	*dest = '\0';
	return (ret);
}
