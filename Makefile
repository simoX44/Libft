# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: mmouis <marvin@42.fr>                        +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2025/10/13 18:35:05 by mmouis              #+#    #+#             #
#   Updated: 2025/10/13 18:35:05 by mmouis             ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAG = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c\
	  ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
	  ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_split.c
NAME = libft.a
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar src $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAG) -g -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(NAME)

re: fclean all

test: $(NAME)
	$(CC) $(NAME) -g main.c $(NAME)
