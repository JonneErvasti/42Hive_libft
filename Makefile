# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 13:31:05 by jervasti          #+#    #+#              #
#    Updated: 2022/11/02 17:41:16 by jervasti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isalpha.c \
		ft_isupper.c \
		ft_islower.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_isspace.c \
		ft_skipspace.c \
		ft_strdup.c \
		ft_itoa.c \
		ft_substr.c \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
#letters: library, replace existing, create, generate index

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all


#copy: possibility to choose a backup folder

.PHONY: all clean fclean re
#prevent files which use name like "all" to crash the Makefile
