# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lselao <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 13:12:42 by lselao            #+#    #+#              #
#    Updated: 2019/05/24 14:32:27 by lselao           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRC = *.c

OBJECT = *.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJECT)
	ranlib $(NAME)
	gcc -L -lft


clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
