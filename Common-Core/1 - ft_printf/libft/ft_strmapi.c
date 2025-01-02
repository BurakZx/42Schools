/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 16:41:32 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/18 18:00:32 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	ret = (char *)malloc(ft_strlen(s) + 1);
	if (!ret)
		return (NULL);
	i = 0;
	while (*s)
		*ret++ = f(i++, *s++);
	*ret = '\0';
	return (ret - i);
}
