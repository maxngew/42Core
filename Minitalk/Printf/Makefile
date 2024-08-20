# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jngew <jngew@student.42singapore.sg>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 16:50:20 by jngew             #+#    #+#              #
#    Updated: 2024/06/25 22:29:37 by jngew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c ft_char.c ft_str.c ft_ptr.c ft_nbr.c ft_unsignednbr.c ft_hex.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)
		ranlib $(NAME)

%.o : %.c
	@echo "Coverting .c files to .o files"
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) test

re: fclean $(NAME)

.PHONY: all clean fclean re
