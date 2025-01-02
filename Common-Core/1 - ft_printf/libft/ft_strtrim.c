/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 23:04:35 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/19 16:31:54 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned char	isdelim(char c, const char *delim)
{
	while (*delim)
		if (c == *delim++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*retstr;
	size_t	start;
	size_t	end;

	start = 0;
	while (isdelim(s1[start], set))
		start++;
	if (start == ft_strlen(s1))
		return (ft_strdup(""));
	end = ft_strlen(s1);
	while (isdelim(s1[end - 1], set))
		end--;
	retstr = (char *)malloc((end - start) + 1);
	if (!retstr)
		return (NULL);
	(void)ft_strlcpy(retstr, &s1[start], (end - start) + 1);
	return (retstr);
}
