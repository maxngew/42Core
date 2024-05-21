# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 22:05:08 by jngew             #+#    #+#              #
#    Updated: 2024/05/21 19:41:21 by jngew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_isalpha.c ft_substr.c ft_strlen.c ft_strdup.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	ar rcs	$(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c
	@echo "Coverting .c files to .o files"
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME) test_files.c
	$(CC) -o test test_files.c -L. -lft

norminette:
	@echo "Norminette all files"
	norminette -R CheckForbiddenSourceHeader $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test

re: fclean $(NAME)

.PHONY: all test norminette clean fclean re
