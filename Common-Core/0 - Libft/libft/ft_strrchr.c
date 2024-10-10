/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:43:44 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/08 10:43:44 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *src, char c)
{
	unsigned int	i;

	i = ft_strlen(src) - 1;
	while (src[i] != c && i != 0)
		i--;
	if (!(i))
	{
		if (src[i] == c)
			return (src);
		else
			return (NULL);
	}
	return (src + i);
}
