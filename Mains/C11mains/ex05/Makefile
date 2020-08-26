# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sameye <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/25 13:35:05 by sameye            #+#    #+#              #
#    Updated: 2020/08/25 15:43:29 by sameye           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = do-op

SRCS = ft_do_op.c ft_utils.c operators.c

OBJS = ${SRCS:.c=.o}


CC = gcc -Wall -Wextra -Werror

all : ${NAME}

${NAME} : ${OBJS}
	${CC} -o ${NAME} ${OBJS} -I .

ft_do_op.o : ft_do_op.c
	${CC} -o ft_do_op.o -c ft_do_op.c -I .

ft_utils.o : ft_utils.c
	${CC} -o ft_utils.o -c ft_utils.c -I .

operators.o : operators.c
	${CC} -o operators.o -c operators.c -I .

clean :
	rm -rf ${OBJS}

fclean : clean
	rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re
