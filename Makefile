# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ztisnes <ztisnes@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/09 10:53:08 by ztisnes           #+#    #+#              #
#    Updated: 2018/05/09 11:02:01 by ztisnes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAM_CLIENT	= client
NAM_SERVER	= server
SRCSFILES	= main.c
OBJFILES	= $(SRCSFILES:%.c=%.o)
SRC			= $(addprefix src/,$(SRCFILES))
OBJ			= $(addprefix obj/,$(OBJFILES))
CC			= gcc
FLAGS		+= -Wextra -Wall -Werror
DEBUG		+= -g -Wextra -Wall -Werror
INC			= -I libft/inc -I inc/
LIB			= -L libft/ -lft

$(NAME): $(OBJ)
	make -C libft
	$(CC) $(FLAGS) -o $@ $^ $(SRC) $(LIB)

$(DUMMY): $(OBJ)
	make -C libft
	$(CC) $(DEBUG) -o $@ $^ $(SRC) $(LIB)

all:$(NAME)

git:
	echo "ztisnes" >> author
	git add .
	git status

debug: $(DUMMY)

objdir:
	mkdir -p obj/

obj/%.o: src/%.c | objdir
	$(CC) $(FLAGS) -c $< -o $@ $(INC)

rmobj:
	rm -rf obj/

rmbin:
	rm -rf $(NAME)
	rm -rf $(DUMMY)

clean: rmobj
	make clean -C libft/

fclean: clean rmbin
	make fclean -C libft/

re: fclean all
