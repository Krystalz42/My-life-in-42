# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroulin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/24 00:37:17 by aroulin           #+#    #+#              #
#    Updated: 2016/08/25 04:10:18 by aroulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

FLAG = -Wall -Werror -Wextra

HEADER = ./head/

SRC = ./sources/

all:
	gcc -c $(SRC)*.c $(FLAG)
	gcc -o $(NAME) *.o
clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)
re: fclean all
