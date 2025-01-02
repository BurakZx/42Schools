/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 22:25:19 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/19 15:30:03 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;

	ret = malloc(ft_strlen(s1) + 1);
	if (!ret)
		return (NULL);
	(void)ft_strlcpy(ret, s1, ft_strlen(s1) + 1);
	return (ret);
}
