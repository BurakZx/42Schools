# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 20:37:32 by btarhan           #+#    #+#              #
#    Updated: 2024/10/11 18:08:11 by btarhan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library = libft

FILES = ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_putchar.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_striteri.c
		

CFILES = $(FILES:.c=.c)

OFILES = $(FILES:.c=.o)

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

.PHONY: all clean fclean re bonus

