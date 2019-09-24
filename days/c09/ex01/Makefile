# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egaudry <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/18 02:31:00 by egaudry           #+#    #+#              #
#    Updated: 2019/08/18 12:32:45 by egaudry          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJS = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

${NAME} :	${SRCS}
			gcc -Wall -Werror -Wextra -c ${SRCS}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all :		${NAME}

clean :
			rm -rf *.o

fclean :	clean
			rm -rf ${NAME}

re :		fclean all

.PHONY :	all clean fclean re
