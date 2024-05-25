# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 22:05:08 by jngew             #+#    #+#              #
#    Updated: 2024/05/25 22:58:30 by jngew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_isalpha.c ft_strlcpy.c ft_strlen.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.cft_putendl.fd.c ft_putnbr_fd.c


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
	@echo "Norminette libft.h"
	norminette -R CheckDefine libft.h

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test

re: fclean $(NAME)

.PHONY: all test norminette clean fclean re
