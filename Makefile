# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcsilv <marcsilv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 18:28:31 by welepy            #+#    #+#              #
#    Updated: 2024/11/17 17:22:27 by marcsilv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
CC		=	cc
CFLAGS		=	-Wall -Wextra -Werror
SRC_DIR		=	srcs
INC_DIR		=	includes
OBJ_DIR		=	.

HEADER		=	ft_printf.h

SRC_FILES	=	utils.c				\
			prints.c			\
			ft_printf.c			\
			bonus_utils.c			\
			./flags_and_specifiers/hash.c	\
			./flags_and_specifiers/digits.c	\
			./flags_and_specifiers/zero.c	\
			./flags_and_specifiers/space.c	\
			./flags_and_specifiers/dot.c	\
			./flags_and_specifiers/plus.c	\

OBJ_FILES	= 	$(SRC_FILES:.c=.o)
OBJ_PATHS	=	$(addprefix $(OBJ_DIR)/, $(OBJ_FILES))

all: $(NAME)

$(NAME): $(OBJ_PATHS)
	ar rcs $(NAME) $(OBJ_PATHS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re