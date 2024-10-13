# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 20:37:32 by btarhan           #+#    #+#              #
#    Updated: 2024/10/13 16:41:03 by btarhan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Library = libft

FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
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
		ft_putstr \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_putchar \
		ft_putchar_fd \
		ft_putnbr \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \
		ft_striteri

BFILES = ft_lstadd_back \
		 ft_lstadd_front \
		 ft_lstclear \
		 ft_lstdelone \
		 ft_lstiter \
		 ft_lstlast \
		 ft_lstnew \
		 ft_lstsize

SRC = $(FILES:=.c)

OBJ = $(FILES:=.o)

BSRC = $(BFILES:=.c)

BOBJ = $(BFILES:=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OUTNAME = $(Library).a

NAME = $(OUTNAME)

BONUS = $(OBJ) $(BOBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
		ar -rc $(OUTNAME) $(OBJ)
		
all: $(NAME)		

bonus: $(BONUS)
		ar -rc $(OUTNAME) $(BOBJ)

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus