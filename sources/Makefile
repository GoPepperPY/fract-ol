# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 21:04:50 by goda-sil          #+#    #+#              #
#    Updated: 2023/05/09 21:17:01 by goda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

CC = cc

CFLAGS = -g -Wall -Werror -Wextra
MLXFLAGS = -L../libraries/minilibx -lmlx -lX11 -lXext -lm -lbsd
FUNCTIONS = ./functions/functions.a

SOURCE = fractol.c mandelbrot.c julia.c complex_math.c painter.c hooks.c

OBJECT = $(SOURCE:.c=.o)

#Rules:
all: $(NAME)

$(FUNCTIONS):
		$(MAKE) -C ./functions

$(NAME):$(OBJECT) $(FUNCTIONS)
		$(MAKE) --no-print-directory -C ../libraries/minilibx
		$(CC) $(CFLAGS) $(OBJECT) $(MLXFLAGS) $(FUNCTIONS) -o $(NAME)

c:
		$(MAKE) clean -C ./functions
		rm -rf $(SOURCE:.c=.o)

f: 		c
		$(MAKE) fclean -C ./functions
		rm -rf $(NAME)

r: f all
