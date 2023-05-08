# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 21:04:50 by goda-sil          #+#    #+#              #
#    Updated: 2023/05/08 21:09:52 by goda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

CC = cc

CFLAGS = -g -Wall -Werror -Wextra
MLXFLAGS = -L../libraries/minilibx -lmlx -lX11 -lXext -lm -lbsd
#FUNCTIONS = ./functions/functions.a

SRC = main/fractol.c mandelbrot/mandelbrot.c julia/julia.c functions/string_compare.c functions/string_length.c

OBJECT = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJECT)
#		$(MAKE) --no-print-directory -C ./functions
		$(MAKE) --no-print-directory -C ../libraries/minilibx
		$(CC) $(CFLAGS) $(OBJECT) $(MLXFLAGS) -o $(NAME)

clean:
#		$(MAKE) clean -C ./functions
		rm -rf $(SRC:.c=.o)

fclean: clean
#		$(MAKE) fclean -C ./functions
		rm -rf $(NAME)

re: fclean all
