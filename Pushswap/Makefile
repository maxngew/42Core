# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 15:58:15 by jngew             #+#    #+#              #
#    Updated: 2024/09/03 16:03:57 by jngew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =

OBJ = ${SRC:%.c=%.o}

all = ${NAME}

%.o: %.c
		@echo "Coverting .c files to .c files"
		@${CC} ${CFLAGS}

clean: 
		@echo "Cleaning..."
		@rm -f ${OBJ}
		@echo "Clean up successfully!"

fclean: clean
		@echo "Full cleaning..."
		@rm -f
		@echo "Full clean up successfully!"

re:		fclean all

.PHONY: 
