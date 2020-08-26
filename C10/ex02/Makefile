# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sameye <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 14:45:42 by sameye            #+#    #+#              #
#    Updated: 2020/08/26 17:25:05 by sameye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : ft_tail

ft_tail : ft_tail.o
	gcc -Wall -Wextra -Werror -o ft_tail  ft_tail.o

ft_tail.o : ft_tail.c
	gcc -Wall -Wextra -Werror -o ft_tail.o -c ft_tail.c

clean :
	rm -rf ft_tail.o

fclean : clean
	rm -rf ft_tail

.PHONY : all clean fclean re
