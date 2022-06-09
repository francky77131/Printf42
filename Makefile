# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:35:24 by frgojard          #+#    #+#              #
#    Updated: 2022/06/09 12:24:59 by frgojard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc -Wall -Werror -Wextra

RM = rm -f

SRC = main.c \
		ft_printf.c \
		ft_putstr.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbr_hexa.c
		

OBJ = $(SRC:.c=.o)

all: $(NAME) test
		
.c.o:
	$(CC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

test:
	$(CC) main.c $(NAME)

supa: fclean
	$(RM) a.out

re: fclean all

.PHONY: all bonus clean fclean re
