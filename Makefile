# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperraul <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/14 16:14:09 by aperraul          #+#    #+#              #
#    Updated: 2015/12/14 16:57:10 by cchameyr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS =	sources/check_array.c \
		sources/check_linked.c \
		sources/compactor.c \
		sources/edit_square.c \
		sources/get_form.c \
		sources/lst_form.c \
		sources/lst_str.c \
		sources/main.c

OBJS =	check_array.o \
		check_linked.o \
		compactor.o \
		edit_square.o \
		get_form.o \
		lst_form.o \
		lst_str.o \
		main.o

LIB =	lib/libft.a

CC = gcc

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME) $(LIB)

$(OBJS):
	$(CC) $(FLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
