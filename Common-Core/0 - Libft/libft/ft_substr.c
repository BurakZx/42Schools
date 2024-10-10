/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:32:43 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/10 22:32:43 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ret;
	size_t	j;

	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	str += start;
	j = 0;
	while (j < len && *str)
		ret[j++] = *str++;
	ret[j] = '\0';
	return (ret);
}
