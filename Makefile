# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/02 20:41:31 by marvin            #+#    #+#              #
#    Updated: 2023/04/02 20:41:31 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libprintf.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC =	ft_putchar.c ft_putnbr.c ft_putstr.c

SRCO = $(SRC:.c=.o)

CME = ar -rcs

RM = rm -f

$(NAME):	$(SRCO)
			$(CME) $(NAME) $(SRCO)

all: $(NAME)

clean:
		$(RM) $(SRCO)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

run:	re
		$(RM) result
		$(CC) -o result main.c -L. -lprintf