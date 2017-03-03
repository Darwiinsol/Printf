# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apissier <apissier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/23 17:55:27 by apissier          #+#    #+#              #
#    Updated: 2016/11/23 17:55:52 by apissier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS += -Wall -Wextra -Werror
CC = cc
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

all:
	    @make $(NAME)

$(NAME): $(OBJ)
	    ar rc $(NAME) $(OBJ)
		    ranlib $(NAME)
clean:
	    rm -rf $(OBJ)

fclean: clean
	    rm -rf $(NAME)

re: fclean all
