# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 15:58:15 by jngew             #+#    #+#              #
#    Updated: 2024/09/16 17:25:29 by jngew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = check_utils.c checks.c free_error.c helper_ab.c helper_ba.c helper_args.c helper_ft.c helper_lst.c op1.c op2.c op3.c push_swap.c rotate_utils.c rotate.c sort_utils.c

OBJ = ${SRC:%.c=%.o}

all: ${NAME}

%.o: %.c
		@echo "Coverting .c files to .c files"
		@${CC} ${CFLAGS} -Ilibft -Iprintf -c $< -o $@

${NAME}: ${OBJS}
			@echo "Building..."
			@make -C libft > /dev/null
			@make -C printf > /dev/null
			${CC} ${CFLAGS} $^ -Llibft -lft -Lprintf -lftprintf -o ${NAME}
			@echo "Built successfully"

libft:
		make -C libft > /dev/null

printf:
		make -C printf > /dev/null

clean:
		@echo "Cleaning..."
		@make clean -C libft > /dev/null
		@make clean -C printf > /dev/null
		@rm -f ${OBJ}
		@echo "Clean up successfully!"

fclean: clean
		@echo "Full cleaning..."
		@rm -f ${NAME}
		@make fclean -C libft > /dev/null
		@make fclean -C printf > /dev/null
		@echo "Full clean up successfully!"

re:		fclean all

.PHONY: libft printf all clean fclean re
