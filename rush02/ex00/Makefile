# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcariou <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/18 22:23:29 by pcariou           #+#    #+#              #
#    Updated: 2019/08/18 23:13:36 by pcariou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_get_nbr.c write_numbers.c write_numbers2.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush02

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

CC		= cc

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

