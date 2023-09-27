# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 16:38:54 by sadoming          #+#    #+#              #
#    Updated: 2023/09/27 13:59:07 by sadoming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR = Printf #Change this directory
TDIR = Tests
# ------------------------------^
TEST = test.out
NM = ./Printf/libftprintf.a #Change this directory
TN = ./$(TDIR)/test_printf.a
CFLAGS = -Wall -Werror -Wextra -I
#------------------------------------------------------------------------------#
all:
	@make $(NM)
	@make $(TN)
	@make $(TEST)
	@make norminette
	@make test

#-------------------------------------------------------------#
# Compiling Region:
$(NM):
	@echo "\033[1;93m * Compiling Printf -->\033[1;97m\n"
	@make -C $(DIR)

$(TN):
	@echo "\033[1;93m * Compiling Tests -->\033[1;97m\n"
	@make -C $(TDIR)
#-------------------------------------------------------------#
# Test region:
$(TEST): $(NM) $(TN)
	@gcc -o $(TEST) $(NM) $(TN)
	@echo "\033[1;35m Ready to Test!\033[1;97m\n"

norminette:
	@echo "\n\033[1;93m~ Norminette:"
	@norminette $(DIR)
	@echo "\033[1;32m ~ Norminette OK\n"

test: $(TEST)
	@leaks -atExit -- ./$(TEST)
	@make fclean

# ******************************************************************************* #
# Debuging region:
DEB = debug.out

$(DEB): $(NM) $(TN)
	@gcc -g -o $(DEB) $(NM) $(TN)

debug: $(DEB)
	@lldb $(DEB)

valgrind: $(DEB)
	@valgrind ./$(DEB)

# ********************************************************************************* #
# Clean region
clean:
	@make clean -C $(DIR)
	@make clean -C $(TDIR)
	@/bin/rm -f $(TEST)
	@/bin/rm -f $(DEB)

fclean : clean
	@make fclean -C $(DIR)
	@make fclean -C $(TDIR)
	@/bin/rm -frd test.out.dSYM
	@/bin/rm -frd debug.out.dSYM
	@/bin/rm -f .DS_Store

clear: fclean
	@clear

re: fclean all
# -------------------- #
.PHONY: all clean clear fclean debug re test valgrind

# ********************************************************************************** #
