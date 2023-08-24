# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 16:38:54 by sadoming          #+#    #+#              #
#    Updated: 2023/08/24 19:54:01 by sadoming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

# Sources:
LIB = ft_printf.h

SRC = ft_calloc.c ft_itoa.c ft_printf.c ft_switch_cast.c

OBJ = $(patsubst %.c, %.o, $(SRC)) $(LIB)
#------------------------------------------------------------------------------#

### Region 4 test files 4 Printf ###
TEST = test.out

TLIB = test_printf.h

TSRC = main.c test_nc.c test_nbr.c test_hexc.c test_utils.c

TOBJ = $(patsubst %.c, %.o, $(TSRC)) $(TLIB)
#------------------------------------------------------------------------------#

all: $(NAME)

%.o : %.c $(LIB) $(MAK)
	cc $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

# make test.out:
$(TEST): $(OBJ) $(TOBJ)
	@norminette $(SRC) 
	@gcc -o $(TEST) *.o
	@echo * "\n\n"

# ./test.out:
test: $(TEST)
	@leaks -atExit -- ./$(TEST)
	@make fclean

# *************************************************************************************** #

# lldb:
DEB = debug.out
DEBB = $(SRC) $(TSRC)

$(DEB): $(DEBB)
	@gcc -g $(DEBB) -o $(DEB)

debug: $(DEB)
	@lldb $(DEB)

# *************************************************************************************** #

clean:
	@/bin/rm -f *.o

fclean : clean
	@/bin/rm -f $(NAME)

re: fclean all

clear:
	/bin/rm -f *.swp
	/bin/rm -f *.o
	/bin/rm -f $(NAME)
	/bin/rm -f $(TEST)
	/bin/rm -f $(DEB)
	@clear
# -------------------- #
.PHONY: clean fclean re rebonus test debug clear

# *************************************************************************************** #
