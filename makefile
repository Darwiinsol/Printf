#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apissier <apissier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/07 10:36:13 by apissier          #+#    #+#              #
#    Updated: 2017/04/24 18:06:09 by apissier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LOG_CLEAR       = \033[2K
LOG_UP          = \033[A
LOG_NOCOLOR     = \033[0m
LOG_BOLD        = \033[1m
LOG_UNDERLINE   = \033[4m
LOG_BLINKING    = \033[5m
LOG_BLACK       = \033[1;30m
LOG_RED         = \033[1;31m
LOG_GREEN       = \033[1;32m
LOG_YELLOW      = \033[1;33m
LOG_BLUE        = \033[1;34m
LOG_VIOLET      = \033[1;35m
LOG_CYAN        = \033[1;36m
LOG_WHITE       = \033[1;37m

NAME = libftprintf.a
FLAG = -Wall -Werror -Wextra
LIB = ./libft/libft.a
SRCS_NAME = ft_printf.c \
	ft_check.c \
	ft_check2.c \
	ft_length_modifier.c \
	ft_check_if_flags_int.c \
	ft_size_lenght_int.c \
	ft_size_lenght_str.c \
	ft_size_prec_int.c \
	ft_size_prec_str.c \
	ft_size_prec_uni.c \
	ft_join_lenght_int.c \
	ft_join_flags_int.c \
	ftf_join_flags.c \
	ft_is_blank.c \
	ft_is_plus.c \
	ft_strchar.c \
	ft_printf_char.c \
    ft_printf_hexa.c \
	ft_printf_octal.c \
	ft_printf_unsigned.c \
	ft_printf_percent.c \
	ft_printf_unicode.c \
	ft_check_flags_str.c \
	ft_printf_pointer.c \
	ft_printf_string.c \
	ft_free_return.c \
	ft_printf_di.c
SRCS_PATH		=		srcs/
SRCS			=		$(addprefix $(SRCS_PATH), $(SRCS_NAME))
OBJ_NAME		=		$(SRCS_NAME:.c=.o)
OBJ_PATH		=		obj/
OBJ				=		$(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC				=		./includes/

#COLORS
C_GREEN			=	"\033[33m"
C_END			= 	"\033[0m"

#MESSAGE
SUCCESS			=	SUCCESS$(C_END)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(LOG_CLEAR)$(LOG_BLUE)Make Libft in progress...$(LOG_NOCOLOR)$(LOG_UP)"
	@make -C ./libft/
	@cp libft/libft.a ./$(NAME)
	@echo "$(LOG_CLEAR)$(LOG_GREEN)Make Libft done$(LOG_NOCOLOR)"
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "$(LOG_CLEAR)$(LOG_GREEN)  $@ compilation done$(LOG_NOCOLOR)"

$(OBJ_PATH)%.o: $(SRCS_PATH)%.c
	@mkdir -p obj
	@echo "$(LOG_CLEAR)$(LOG_BLUE)$@ compilation in progress...$(LOG_NOCOLOR)$(LOG_UP)"
	@gcc -c $(FLAGS) -I $(INC) $< -o $@
	@echo "$(LOG_CLEAR)$(LOG_GREEN)  $@ compilation done$(LOG_NOCOLOR)$(LOG_UP)"

exe:
		@make -C ./libft/
		@cc $(SRCS) ./srcs/main.c $(LIB) -o ft_printf
		@echo "$(LOG_CLEAR)$(C_GREEN)"Compiling" [ ft_printf ] $(SUCCESS)"
		@./ft_printf

clean:	
	@make -C ./libft/ fclean
	@/bin/rm -rf $(OBJ_PATH)
	@echo "$(LOG_CLEAR)$(LOG_RED)Clean done$(LOG_NOCOLOR)"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "$(LOG_CLEAR)$(LOG_CLEAR)$(LOG_RED)Fclean done$(LOG_NOCOLOR)"

re: fclean all

.PHONY: all clean fclean re
