# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/19 19:53:07 by jngew             #+#    #+#              #
#    Updated: 2024/08/22 19:22:50 by jngew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

CC = cc
CFLAGS = -Wall -Werror -Wextra -fsanitize=address -g
SRC = server.c client.c
OBJ = $(SRC:%.c=%.o)

all:	${NAME}

%.o:	%.c
		@echo "Converting .c files to .o files"
		${CC} ${CFLAGS} -Ilibft -Iprintf -c $< -o $@

${NAME}: server client

server: server.o
		@make -C libft
		@make -C printf
		${CC} ${CFLAGS} $? -Llibft -lft -Lprintf -lftprintf -o server

client: client.o
		@make -C libft
		@make -C printf
		${CC} ${CFLAGS} $? -Llibft -lft -Lprintf -lftprintf -o client

libft:
		make -C libft

printf:
		make -C printf

norminette:
		@echo "Norminette all files"
		norminette -R CheckForbiddenSourceHeader ${SRC} libft/*.c printf/*.c
		@echo "Norminette header files"
		norminette -R CheckDefine minitalk.h libft/*.h printf/*.h

clean:
		make clean -C libft
		make clean -C printf
		rm -f ${OBJ}

fclean:	clean
		rm -f server client
		make fclean -C libft
		make fclean -C printf

re:		fclean all

.PHONY:	libft printf norminette
