# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arannara <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/10 12:12:21 by arannara          #+#    #+#              #
#    Updated: 2020/03/10 17:07:05 by arannara         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_putchar.c \
	  ./srcs/ft_putstr.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strlen.c \
	  ./srcs/ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

HEADER_FOLDER = ./includes/

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER_FOLDER)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)	

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
