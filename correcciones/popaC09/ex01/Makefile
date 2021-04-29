# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpopa-po <jpopa-po@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/28 11:59:48 by jpopa-po          #+#    #+#              #
#    Updated: 2021/04/28 11:59:50 by jpopa-po         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC					= ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS		= ${addprefix ${PRE}, ${SRC}}
OBJS		= ${SRCS:.c=.o}
PRE					= ./srcs/
HEAD		= ./includes/
NAME				= libft.a
AR					= ar rc
RM					= rm -f
LIB					= ranlib
GCC					= gcc
CFLAGS		= -Wall -Wextra -Werror
all:		${NAME}
.c.o:
					${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}
${NAME}:	${OBJS}
					${AR} ${NAME} ${OBJS}
					${LIB} ${NAME}
clean:
					rm -f ${OBJS}
fclean:		clean
					rm -f ${NAME}
re:					fclean all
.PHONY:		all clean fclean re
