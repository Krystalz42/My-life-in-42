# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroulin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/23 08:20:47 by aroulin           #+#    #+#              #
#    Updated: 2016/08/25 01:43:53 by aroulin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra

SRC = ./srcs/

HEADER = ./includes/

all:
	gcc -c $(SRC)*.c $(FLAG)
	ar rc libft.a *.o  $(HEADER)*.h
	ranlib libft.a

clean:
	rm -rf *.o
fclean: clean
	rm -rf *.a
re: fclean all 	

