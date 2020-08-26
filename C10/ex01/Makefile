# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sameye <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 14:45:42 by sameye            #+#    #+#              #
#    Updated: 2020/08/26 17:37:35 by sameye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : ft_cat

ft_cat : ft_cat.o
	gcc -Wall -Wextra -Werror -o ft_cat  ft_cat.o

ft_cat.o : ft_cat.c
	gcc -Wall -Wextra -Werror -o ft_cat.o -c ft_cat.c

clean :
	rm -rf ft_cat.o

fclean : clean
	rm -rf ft_cat

.PHONY : all clean fclean re
