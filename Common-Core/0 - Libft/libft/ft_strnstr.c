/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:35:40 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/11 14:14:45 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i] && len > i)
	{
		j = 0;
		while (len > i + j && str[i + j] && str[i + j] == to_find[j])
			j++;
		if (!(to_find[j]))
			return (str + i);
		i++;
	}
	return (NULL);
}
