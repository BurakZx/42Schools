/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 23:04:35 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/11 14:40:38 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isdelim(char c, const char *delim)
{
	while (*delim)
		if (c == *delim++)
			return (1);
	return (0);
}

static int	totalnotdelim(const char *str, const char *delim)
{
	int	count;

	count = 0;
	while (*str)
		if (!isdelim(*str++, delim))
			count++;
	return (count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*retstr;
	void	*retadress;

	retstr = (char *)malloc(totalnotdelim(s1, set) + 1);
	if (!retstr)
		return (NULL);
	retadress = retstr;
	while (*s1++)
		if (!isdelim(*(s1 - 1), set))
			*retstr++ = *(s1 - 1);
	*retstr = '\0';
	return ((char *)retadress);
}
