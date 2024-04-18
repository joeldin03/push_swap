# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joelozan <joelozan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 18:49:14 by joelozan          #+#    #+#              #
#    Updated: 2024/04/18 20:19:51 by joelozan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	push_swap

SRCS =	src/main.c \
		src/o_push.c \
		src/o_rotate.c \
		src/o_rrotate.c \
		src/o_swap.c \
		src/radix.c \
		src/sort.c \
		utils/check_args.c \
		utils/utils.c \
		libft/ft_atoi.c \
		libft/ft_lst.c \
		libft/ft_putendl_fd.c \
		libft/ft_split.c

OBJS = $(SRCS:.c=.o)

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