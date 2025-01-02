/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:33:16 by btarhan           #+#    #+#             */
/*   Updated: 2024/11/19 11:33:16 by btarhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//gcc ft_printf.c ft_printf_utils.c -L./libft -lft

int ft_printf(const char *format, ...) {
    va_list args;
    int total_written = 0;

    va_start(args, format);
    while (*format) {
        if (*format == '%') {
            format++;
            total_written += handle_format(*format, args);
        } else {
            write(1, format, 1);
            total_written++;
        }
        format++;
    }
    va_end(args);
    return total_written;
}
int main() {
    ft_printf("Character: %c\n", 'A');
    ft_printf("String: %s\n", "Hello, World!");
    ft_printf("Pointer: %p\n", &main);
    ft_printf("Signed: %d\n", -42);
    ft_printf("Unsigned: %u\n", 42);
    ft_printf("Hex (lower): %x\n", 255);
    ft_printf("Hex (upper): %X\n", 255);
    ft_printf("Percent: %%\n");
    return 0;
}
