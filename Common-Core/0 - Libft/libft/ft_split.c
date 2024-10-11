/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:32:54 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/11 14:15:02 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_includes(char c, const char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

static int	ft_countwords(const char *str, const char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (ft_includes(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !ft_includes(*str, charset))
			str++;
	}
	return (count);
}

static void	cpynextword(const char **str, char *dest, const char *charset)
{
	while (**str && ft_includes(**str, charset))
		(*str)++;
	while (**str && !ft_includes(**str, charset))
		*dest++ = *(*str)++;
	*dest = '\0';
}

static int	lenofnextword(const char *str, const char *charset)
{
	int	len;

	len = 0;
	while (ft_includes(*str, charset) && *str && *++str)
		;
	while (!ft_includes(*str, charset) && *str && *++str)
		len++;
	return (len + 1);
}

char	**ft_split(const char *str, const char *charset)
{
	char	**words;
	int		word_count;
	int		strindex;

	strindex = 0;
	word_count = ft_countwords(str, charset);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (*str)
	{
		words[strindex] = (char *)malloc((lenofnextword(str, charset)));
		if (!words[strindex])
		{
			while (strindex > 0)
				free(words[--strindex]);
			free(words);
			return (NULL);
		}
		cpynextword(&str, words[strindex], charset);
		strindex++;
	}
	words[strindex] = NULL;
	return (words);
}
