/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:32:43 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/19 16:49:03 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ret_str;
	size_t	str_len;

	if (!str)
		return (NULL);
	str_len = ft_strlen(str);
	if (start > str_len)
		return (ft_strdup(""));
	if (len > (size_t)(str_len - start))
		len = (size_t)(str_len - start);
	ret_str = (char *)malloc(len + 1);
	if (!ret_str)
		return (NULL);
	(void)ft_strlcpy(ret_str, str + start, len + 1);
	return (ret_str);
}
