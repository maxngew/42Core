# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/19 19:53:07 by jngew             #+#    #+#              #
#    Updated: 2024/08/31 16:31:55 by jngew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = server.c client.c
OBJ = $(SRC:%.c=%.o)

all:	${NAME}

%.o:	%.c
		@echo "Converting .c files to .o files"
		@${CC} ${CFLAGS} -Ilibft -Iprintf -c $< -o $@

${NAME}: server client

server: server.o
		@echo "Building server..."
		@make -C libft > /dev/null
		@make -C printf > /dev/null
		@${CC} ${CFLAGS} $? -Llibft -lft -Lprintf -lftprintf -o server
		@echo "Server built successfully!"

client: client.o
		@echo "Building client..."
		@make -C libft > /dev/null
		@make -C printf > /dev/null
		@${CC} ${CFLAGS} $? -Llibft -lft -Lprintf -lftprintf -o client
		@echo "Client built successfully!"

libft:
		make -C libft > /dev/null

printf:
		make -C printf > /dev/null

norminette:
		@echo "Norminette all files"
		norminette -R CheckForbiddenSourceHeader ${SRC} libft/*.c printf/*.c
		@echo "Norminette header files"
		norminette -R CheckDefine minitalk.h libft/*.h printf/*.h

clean:
		@echo "Cleaning..."
		@make clean -C libft > /dev/null
		@make clean -C printf > /dev/null
		@rm -f ${OBJ}
		@echo "Clean up successfully!"

fclean:	clean
		@echo "Full cleaning..."
		@rm -f server client
		@make fclean -C libft > /dev/null
		@make fclean -C printf > /dev/null
		@echo "Full clean up successfully!"

re:		fclean all

.PHONY:	libft printf
