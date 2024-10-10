/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:35:11 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/08 13:35:11 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int len)
{
	while (*s1++ == *s2++)
		if (len-- == 1)
			return (*--s1 - *--s2);
	return (*--s1 - *--s2);
}
