/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 01:08:11 by btarhan           #+#    #+#             */
/*   Updated: 2025/01/02 17:48:01 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	prt_str(char const *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	else
		return (write(1, str, ft_strlen(str)));
}
