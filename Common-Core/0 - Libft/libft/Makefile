# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btarhan <btarhan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 20:37:32 by btarhan           #+#    #+#              #
#    Updated: 2024/10/25 16:59:53 by btarhan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

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
		ft_striteri

BFILES = ft_lstadd_back \
		 ft_lstadd_front \
		 ft_lstclear \
		 ft_lstdelone \
		 ft_lstiter \
		 ft_lstlast \
		 ft_lstnew \
		 ft_lstsize \
		 ft_lstmap

OBJ = $(FILES:=.o)

BOBJ = $(BFILES:=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

BONUS = $(OBJ) $(BOBJ)

$(NAME): $(OBJ)
		ar -rc $(NAME) $(OBJ)

bonus: $(BONUS)
		ar -rc $(NAME) $(BOBJ)

all: $(NAME)

$(OBJ) :
		$(foreach file, $(FILES), $(CC) $(CFLAGS) -c $(file).c -o $(file).o;)
$(BOBJ) :
		$(foreach file, $(BFILES), $(CC) $(CFLAGS) -c $(file).c -o $(file).o;)

clean:
		rm -f $(OBJ) $(BOBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
