/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:41:05 by btarhan           #+#    #+#             */
/*   Updated: 2024/11/19 11:41:05 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

char *ft_utoa(unsigned int n) {
	char *str;
	int len = 1;
	unsigned int temp = n;

	while (temp /= 10) ++len;
	if (!(str = malloc(len + 1))) return NULL;
	str[len] = '\0';
	while (len-- && (str[len] = '0' + (n % 10))) n /= 10;
	return str;
}
char *ft_utoa_base(unsigned long n, char *base) {
	char *str;
	int base_len = 0, len = 1;
	unsigned long temp = n;

	while (base[base_len]) base_len++;
	while (temp /= base_len) ++len;
	if (!(str = malloc(len + 1))) return NULL;
	str[len] = '\0';
	while (len-- && (str[len] = base[n % base_len])) n /= base_len;
	return str;
}

int handle_format(char specifier, va_list args)
{
	if (specifier == 'c')
		return handle_char(args);
	else if (specifier == 's')
		return handle_string(args);
	else if (specifier == 'd' || specifier == 'i')
		return handle_integer(args);
	else if (specifier == 'u')
		return handle_unsigned(args);
	else if (specifier == 'x' || specifier == 'X')
		return handle_hex(args, specifier);
	else if (specifier == 'p')
		return handle_pointer(args);
	else if (specifier == '%')
		return write(1, "%", 1);
	return 0;
}

int handle_char(va_list args) {
	char c = (char)va_arg(args, int);
	return write(1, &c, 1);
}

int handle_string(va_list args) {
	char *str = va_arg(args, char *);
	if (!str) str = "(null)";
	return write(1, str, ft_strlen(str));
}

int handle_pointer(va_list args) {
	void *ptr = va_arg(args, void *);
	char *hex_str;
	int written = write(1, "0x", 2);

	if (!(hex_str = ft_utoa_base((unsigned long)ptr, "0123456789abcdef")))
		return written;
	written += write(1, hex_str, ft_strlen(hex_str));
	free(hex_str);
	return written;
}

int handle_integer(va_list args) {
	int n = va_arg(args, int);
	char *str = ft_itoa(n);
	int written = write(1, str, ft_strlen(str));
	free(str);
	return written;
}

int handle_unsigned(va_list args) {
	unsigned int n = va_arg(args, unsigned int);
	char *str = ft_utoa(n);
	int written = write(1, str, ft_strlen(str));
	free(str);
	return written;
}

int handle_hex(va_list args, char specifier) {
	unsigned int n = va_arg(args, unsigned int);
	char *base = (specifier == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
	char *str = ft_utoa_base(n, base);
	int written = write(1, str, ft_strlen(str));
	free(str);
	return written;
}

int handle_percent() {
	return write(1, "%", 1);
}




