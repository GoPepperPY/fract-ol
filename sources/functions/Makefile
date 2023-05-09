# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: goda-sil <goda-sil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/09 18:12:20 by goda-sil          #+#    #+#              #
#    Updated: 2023/05/09 18:50:36 by goda-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = functions.a

SRCS = string_length.c string_compare.c

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC_OBJS = $(SRCS:.c=.o)

.c.o:
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(SRC_OBJS)
	@$(AR) $(NAME) $(SRC_OBJS)

clean:
	@$(RM) $(SRC_OBJS)

fclean:
	@$(RM) $(SRC_OBJS)
	@$(RM) $(NAME)

re: fclean all
