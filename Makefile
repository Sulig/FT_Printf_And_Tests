# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 16:38:54 by sadoming          #+#    #+#              #
#    Updated: 2023/09/26 14:39:09 by sadoming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PF = Printf
TDIR = Tests
# ------------------------------^
TEST = test.out
NM = ./$(PF)/libftprintf.a
TN = ./$(TDIR)/test_printf.a
CFLAGS = -Wall -Werror -Wextra -I

#------------------------------------------------------------------------------#
# Test region:
$(TEST): clear
	@make norminette
	@echo "\033[1;93m * Compiling Printf -->\033[1;97m\n"
	@make -C $(PF)
	@echo "\033[1;93m * Compiling Tests -->\033[1;97m\n"
	@make -C $(TDIR)
	@gcc -o $(TEST) $(NM) $(TN)
	@echo "\033[1;35m Ready to Test!\033[1;97m\n"

norminette: $(PF)
	@echo "\n\033[1;93m~ Norminette:"
	@norminette $(PF)
	@echo "\033[1;32m ~ Norminette OK\n"

test: $(TEST)
	@leaks -atExit -- ./$(TEST)
	@make fclean

# ******************************************************************************* #
# Debuging region:
DEB = debug.out

$(DEB): $(DEBB)
	@gcc -g $(DEBB) -o $(SRC)

debug: $(DEB)
	@lldb $(DEB)

valgrind: $(DEB)
	@gcc -g $(FLAGS) -o $(DEB) $(DEBB)
	@valgrind ./$(DEB)

# ********************************************************************************* #
# Clean region
clean:
	@/bin/rm -f ./$(PF)/*.o
	@/bin/rm -f ./$(TDIR)/*.o
	@/bin/rm -f $(TEST)
	@/bin/rm -f $(DEB)

fclean : clean
	@/bin/rm -f $(NM)
	@/bin/rm -f $(TN)
	@/bin/rm -frd test.out.dSYM
	@/bin/rm -frd debug.out.dSYM
	@/bin/rm -f .DS_Store

clear: fclean
	@clear

re: fclean all
# -------------------- #
.PHONY: all clean clear fclean debug re test valgrind

# ********************************************************************************** #
