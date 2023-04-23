# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 22:28:00 by ceribeir          #+#    #+#              #
#    Updated: 2023/04/23 22:28:00 by ceribeir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.SILENT:

NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRC =	ft_putchar.c ft_putnbr.c ft_putstr.c \
		ft_printf.c ft_hexadec.c ft_uint.c

SRCO = $(SRC:.c=.o)

CME = ar -rcs

RM = rm -f

$(NAME): $(SRCO)
	$(CME) $(NAME) $(SRCO)
	@echo "Compile Done"

all: $(NAME)

clean:
	$(RM) $(SRCO)
	@echo "Revome Done"

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

link: re
	$(RM) result
	$(CC) $(FLAGS) -o result main.c -L. -lftprintf

run: link
	./result
	$(RM) result

.PHONY: all clean fclean re link run