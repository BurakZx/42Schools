/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:07:29 by btarhan           #+#    #+#             */
/*   Updated: 2024/11/19 15:07:29 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdarg.h>
#include "./libft/libft.h"

int handle_format(char specifier, va_list args);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_pointer(va_list args);
int handle_integer(va_list args);
int handle_unsigned(va_list args);
int handle_hex(va_list args, char specifier);
int handle_percent();
char *ft_utoa_base(unsigned long n, char *base);
char *ft_utoa(unsigned int n);

#endif
