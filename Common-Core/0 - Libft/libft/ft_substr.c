/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 22:32:43 by btarhan           #+#    #+#             */
/*   Updated: 2024/10/11 18:01:53 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*ret_str;
	void	*ret_addr;

	ret_str = (char *)malloc(len + 1);
	if (!ret_str)
		return (NULL);
	ret_addr = ret_str;
	str += start;
	while ((size_t)(ret_str - (char *)ret_addr) < len && *str)
		*ret_str++ = *str++;
	*ret_str = '\0';
	return (ret_addr);
}
