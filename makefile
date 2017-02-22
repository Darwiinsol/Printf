#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apissier <apissier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/06 19:45:08 by apissier          #+#    #+#              #
#    Updated: 2017/02/08 15:27:42 by apissier         ###   ########.fr        #
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

ifneq ($(words $(MAKECMDGOALS)),1)
.DEFAULT_GOAL = all
%:
	@$(MAKE) $@ --no-print-directory -rRf $(firstword $(MAKEFILE_LIST))
else
ifndef ECHO
T := $(shell $(MAKE) $(MAKECMDGOALS) --no-print-directory \
      -nrRf $(firstword $(MAKEFILE_LIST)) \
      ECHO="COUNTTHIS" | grep -c "COUNTTHIS")

N := x
C = $(words $N)$(eval N := x $N)
ECHO = echo -ne "$(LOG_CLEAR)\r [`expr $C '*' 100 / $T`%]"
endif


NAME = ft_printf

CFLAGS = -Wall -Wextra -Werror

CC = gcc

SRC_NAME = main_test_2.c \
	ft_printf.c \
	ft_length_modifier.c \
	ft_check_if_flags_int.c \
	ft_size_lenght_int.c \
	ft_size_lenght_str.c \
	ft_size_prec_int.c \
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
	ft_check_flags_str.c \
	ft_free_return.c \
	ft_printf_di.c

SRC = $(addprefix $(SRCDIR)/, $(SRC_NAME))

LIBFT = -Llibft/ -lft

OBJDIR = objs
SRCDIR = ./srcs/
INCDIR = ./includes \
		./libft/libft.h

OBJ = $(addprefix $(OBJDIR)/, $(SRC_NAME:.c=.o))

all: $(NAME)
		@$(ECHO) "$(LOG_GREEN)All done$(LOG_NOCOLOR)"
		@echo "                                _---_"
		@echo "                             __/     \__"
		@echo "                           _/        _ - "
		@echo "                          /          \'$(LOG_RED)*******$(LOG_WHITE)"
		@echo "                          |  /    \   \$(LOG_RED)*************$(LOG_WHITE)"
		@echo "                          |            |$(LOG_RED)***************$(LOG_WHITE)"
		@echo " $(LOG_RED)                       **$(LOG_WHITE)(  ()  ()    )$(LOG_RED)******************"
		@echo "                      ***$(LOG_WHITE)/            \ $(LOG_RED)********************" 
		@echo "                    ****$(LOG_WHITE)/              \ $(LOG_RED)      ***************"
		@echo "                   ****$(LOG_WHITE)/      --'       \ $(LOG_RED)        ************"
		@echo "                  ****$(LOG_WHITE)(        _         )-----__ $(LOG_RED) ***********"
		@echo "                 *****$(LOG_WHITE)|       / \        |       \ $(LOG_RED)*************"
		@echo "                *******$(LOG_WHITE)\      \_/       /$(LOG_RED)      *****************$(LOG_WHITE)_"
		@echo "               $(LOG_RED)*********$(LOG_WHITE)|              /$(LOG_RED)     ******************$(LOG_WHITE)/ )"
		@echo "               $(LOG_RED)*********$(LOG_WHITE)\    ---'      $(LOG_RED)    ******************$(LOG_WHITE)/  /"
		@echo "              $(LOG_RED)********$(LOG_WHITE)/                  $(LOG_RED)**************$(LOG_WHITE)--_$(LOG_RED)*$(LOG_WHITE)/   /$(LOG_RED)*"
		@echo "              $(LOG_RED)******$(LOG_WHITE)/                   $(LOG_RED)**************$(LOG_WHITE)    '    |$(LOG_RED)**$(LOG_WHITE)_"
		@echo "              $(LOG_RED)*****$(LOG_WHITE)/                  $(LOG_RED)************** $(LOG_WHITE)           ____)"
		@echo "     _____   $(LOG_RED)*****$(LOG_WHITE)/                 $(LOG_RED)***************$(LOG_WHITE)\_/      ____  \$(LOG_RED)*$(LOG_WHITE)"
		@echo "    (__   \__$(LOG_RED)****$(LOG_WHITE)/                $(LOG_RED)*************** $(LOG_WHITE) /    /__/$(LOG_RED)****$(LOG_WHITE)\__)"
		@echo "      __\                 /    $(LOG_RED)***************   $(LOG_WHITE) |  _/  $(LOG_RED)*********$(LOG_WHITE)"
		@echo "    (_____              _/\  $(LOG_RED)**************       $(LOG_WHITE) /_/    $(LOG_RED)*********$(LOG_WHITE)"
		@echo "        /            __/  \$(LOG_RED)**************                 *********$(LOG_WHITE)"
		@echo "       / ____\  \__/$(LOG_RED)***  **************                   **********$(LOG_WHITE)"
		@echo "       |_/    \_  \$(LOG_RED)*******************                   **********$(LOG_WHITE)"
		@echo "               $(LOG_RED)*$(LOG_WHITE)\__\$(LOG_RED)****************                    *********"
		@echo "                $(LOG_RED)******************$(LOG_WHITE)\__________         $(LOG_RED) **********"
		@echo "                  $(LOG_RED)************** $(LOG_WHITE) /                 $(LOG_RED) ***********"
		@echo "                  $(LOG_RED)************ $(LOG_WHITE) _/                 $(LOG_RED) ************"
		@echo "                  $(LOG_RED)*************$(LOG_WHITE)/                 $(LOG_RED) *************"
		@echo "                    $(LOG_RED)***************          ***************"
		@echo "                      $(LOG_RED)**************************************"
		@echo "                        $(LOG_RED)**********************************"
		@echo "                            $(LOG_RED)*****************************"
		@echo "                              $(LOG_RED)***********************"
		@echo "                                  $(LOG_RED)***************"
		
$(NAME): $(OBJ)
		@$(ECHO) "$(LOG_BLUE)Make Libft in progress...$(LOG_NOCOLOR)$(LOG_UP)"
		@make -C ./libft/
		@$(CC) $(CFLAGS) -Ilibft/includes/ -Llibft/ -lft -I. -o $@ $(OBJ)
		@$(ECHO) "$(LOG_GREEN)Make Libft done$(LOG_NOCOLOR)"

$(OBJDIR)/%.o : ./srcs/%.c
		@/bin/mkdir -p $(OBJDIR)
		@$(ECHO) "$(LOG_BLUE)$@ compilation in progress...$(LOG_NOCOLOR)$(LOG_UP)"
		@sleep 0.3
		@$(CC) $(CFLAGS) -Ilibft/includes/ -I. -c -o $@ $<
		@$(ECHO) "$(LOG_GREEN)	$@ compilation done$(LOG_NOCOLOR)$(LOG_UP)"

clean:
		@rm -rf $(OBJDIR)
		@make -C ./libft clean
		@$(ECHO) "$(LOG_RED)Clean done$(LOG_NOCOLOR)$(LOG_UP)"
		@sleep 0.5

fclean: clean
		@rm -rf $(NAME) $(OBJDIR)
		@make -C ./libft fclean
		@$(ECHO) "$(LOG_RED)fclean done$(LOG_NOCOLOR)"

re: fclean all

.PHONY: make all fclean clean re

endif