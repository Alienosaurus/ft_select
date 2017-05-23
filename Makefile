# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adenece <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/09 14:49:22 by adenece           #+#    #+#              #
#    Updated: 2017/05/09 14:49:23 by adenece          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: fclean re
.SUFFIXES:
NAME = ft_select
FLAGS = -Wall -Wextra -Werror -std=gnu99
SRC = main.c add_del.c arrow_select.c free_select.c keyparsing.c \
	termwin.c signal_select.c bonus_select.c termcaps_select.c
SRCS = $(foreach S, $(SRC), srcs/$(S))
OBJ = $(SRCS:.c=.o)
TERMCAPS = -lm -lncurses
HEAD = -I libft/includes -I includes
OS = $(shell uname -s)

ifeq ($(OS), Linux)
	FLAGS += -D LINUX
endif

all: lib $(NAME)

$(NAME): $(OBJ)
	gcc $(FLAGS) $(HEAD) $^ -L libft -l ft -o $@ $(TERMCAPS)

%.o: %.c libft/libft.a
	gcc $(FLAGS) $(HEAD)  -c $< -o $@

lib:
	make -C libft

clean:
	rm -f $(OBJ)
	make -C libft clean

fclean: clean
	rm -f $(NAME)
	make -C libft fclean

re: fclean all

re: fclean lib $(DNAME)
