# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 18:49:14 by joelozan          #+#    #+#              #
#    Updated: 2024/04/16 19:33:16 by joelozan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= push_swap

SRCS 	=  $(wildcard src/*.c utils/*.c libft/*.c)

OBJS 	= ${SRCS:.c=.o}

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror -Iincludes

RM 		= rm -rf

all: ${NAME}
${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean: 
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}
	
re: fclean all

.PHONY: all clean fclean re