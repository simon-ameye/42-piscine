# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sameye <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/26 14:45:42 by sameye            #+#    #+#              #
#    Updated: 2020/08/26 16:42:16 by sameye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all : ft_display_file

ft_display_file : main_display.o
	gcc -Wall -Wextra -Werror -o ft_display_file  main_display.o

main_diaplay.o : ft_display_file.c
	gcc -Wall -Wextra -Werror -o main_display.o main_display.c

clean :
	rm -rf main_display.o

fclean : clean
	rm -rf ft_display_file

.PHONY : all clean fclean re
