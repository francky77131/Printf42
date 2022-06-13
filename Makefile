# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frgojard <frgojard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:35:24 by frgojard          #+#    #+#              #
#    Updated: 2022/06/13 17:03:03 by frgojard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc -g3 -Wall -Werror -Wextra

RM = rm -f

SRC = main.c \
		ft_printf.c \
		ft_putstr.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putnbr_hexa.c \
		ft_putnbr_u.c \
		ft_putnbr_p.c

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
