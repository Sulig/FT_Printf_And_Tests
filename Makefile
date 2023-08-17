# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadoming <sadoming@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/10 16:38:54 by sadoming          #+#    #+#              #
#    Updated: 2023/08/17 20:36:34 by sadoming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra -g

MAK = Makefile
LIBF = ft_printf.h
SRC = ft_bzero.c ft_itoa.c ft_printf.c
OBJ = $(patsubst %.c, %.o, $(SRC))
# --------------------------------------- #

all: $(NAME)

%.o : %.c $(MAK) $(LIBF)
	cc $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# *************************************************************** #

### Region 4 test:
TEST = test.out
TSRC = main.c
TOBJ = $(patsubst %.c, %.o, $(TSRC))

$(TEST): $(OBJ) $(TOBJ)
	@gcc -o $(TEST) *.o
	@echo * "\n\n"

test: $(TEST)
	@leaks -atExit -- ./$(TEST)
# ************************************************************************************* #
DEB = debug.out
DEBB = $(SRC) $(TSRC)

$(DEB): $(DEBB)
	@gcc -g $(DEBB) -o $(DEB)
	@echo Compiled!

debug: $(DEB)
	@lldb $(DEB)

# ************************************************************************************* #

clear: fclean
	/bin/rm -f $(TEST)
	/bin/rm -f $(DEB)
	@clear

.PHONY: all clean fclean re test debug clear

# **************************************** #
