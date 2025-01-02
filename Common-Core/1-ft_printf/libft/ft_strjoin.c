/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:46:43 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/19 15:43:03 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *)malloc(total_len);
	if (!ret)
		return (NULL);
	(void)ft_strlcpy(ret, s1, ft_strlen(s1) + 1);
	(void)ft_strlcat(ret, s2, total_len);
	return (ret);
}
