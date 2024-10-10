# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btarhan <btarhan@student.42istanbul.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 20:37:32 by btarhan           #+#    #+#              #
#    Updated: 2024/10/08 20:37:32 by btarhan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library = libft

FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memccpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_strtok \
		ft_strcmp \

CFILES = (FILES: % = %.c)

OFILES = (FILES: % = %.c)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OUTNAME = $(Library).a

NAME = $(OUTNAME)

$(NAME):
		$(CC) $(CFLAGS) -c $(CFILES) -I./
		ar -rc $(OUTNAME) $(OFILES)

all: $(NAME)

$(BONUS):
		$(CC) $(CFLAGS) -c $(CFILES) $(BCFILES)-I./
		ar -rc $(OUTNAME) $(OFILES) $(BOFILES)

bonus: $(BONUS)

clean:
		rm -f $(NAME)
		rm -f $(OFILES) $(BOFILES)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re, bonus

