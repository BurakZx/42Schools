/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:00:04 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/19 17:08:31 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
	}
	return (count);
}

static void	cpynextword(const char **str, char *dest, char c)
{
	while (**str && **str != c)
		*dest++ = *(*str)++;
	*dest = '\0';
}

static int	lenofnextword(const char *str, char c)
{
	int	len;

	len = 0;
	while (*str && *str++ != c)
		len++;
	return (len + 1);
}

static void	*freeall(char ***words_addr, int index)
{
	while (index > 0)
		free((*words_addr)[--index]);
	free(*words_addr);
	return (NULL);
}

char	**ft_split(const char *str, char c)
{
	char	**words;
	int		word_count;
	int		i;

	i = 0;
	word_count = ft_countwords(str, c);
	words = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str)
		{
			words[i] = (char *)malloc(lenofnextword(str, c));
			if (!words[i])
				return (freeall(&words, i));
			cpynextword(&str, words[i++], c);
		}
	}
	words[i] = NULL;
	return (words);
}
