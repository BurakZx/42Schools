/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:24:06 by btarhan           #+#    #+#             */
/*   Updated: 2025/01/02 17:48:06 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	exec_conversion(char spec_ltr, va_list args)
{
	if (spec_ltr == '%')
		return (write(1, "%", 1));
	else if (spec_ltr == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		return (1);
	}
	else if (spec_ltr == 's')
		return (prt_str(va_arg(args, char *)));
	else if (spec_ltr == 'p')
		return (prt_ptr(va_arg(args, void *)));
	else if (spec_ltr == 'd' || spec_ltr == 'i')
		return (prt_int(va_arg(args, int)));
	else if (spec_ltr == 'u')
		return (prt_unsigned(va_arg(args, unsigned int)));
	else if (spec_ltr == 'x')
		return (prt_hexa(va_arg(args, ssize_t), 0));
	else if (spec_ltr == 'X')
		return (prt_hexa(va_arg(args, ssize_t), 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!format)
		return (0);
	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			len += exec_conversion(format[++i], args);
		else
			len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
