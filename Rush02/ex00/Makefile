# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcazabat <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/23 11:31:18 by jcazabat          #+#    #+#              #
#    Updated: 2020/08/23 21:01:16 by sameye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME  = rush-02

all : $(NAME)

$(NAME): main.o read_dict.o read_dict2.o print_num.o print_num2.o ft_util.o
	$(CC) -o $(NAME) main.o read_dict.o read_dict2.o print_num.o print_num2.o ft_util.o -I .

main.o : main.c 
	$(CC) -o main.o -c main.c -Wall -Werror -Wextra -I .

read_dict.o : read_dict.c
	$(CC) -o read_dict.o -c read_dict.c -Wall -Werror -Wextra -I .

read_dict2.o : read_dict2.c
	$(CC) -o read_dict2.o -c read_dict2.c -Wall -Werror -Wextra -I .

print_num.o : print_num.c
	$(CC) -o print_num.o -c print_num.c -Wall -Werror -Wextra -I .

print_num2.o : print_num2.c
	$(CC) -o print_num2.o -c print_num2.c -Wall -Werror -Wextra -I .

ft_util.o : ft_util.c
	$(CC) -o ft_util.o -c ft_util.c -Wall -Werror -Wextra -I .

clean :
	rm -rf  main.o read_dict.o read_dict2.o print_num.o print_num2.o ft_util.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
