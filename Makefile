# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aribeiro <aribeiro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/11 16:36:10 by aribeiro          #+#    #+#              #
#    Updated: 2017/03/16 16:45:22 by aribeiro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_COL = Colleen
NAME_GRA = Grace
NAME_SUL = Sully

SRC_COL =	Colleen.c
SRC_GRA =	Grace.c
SRC_SUL =	Sully.c

DIR_SRCS = srcs/

FLAGS = -Wall -Werror -Wextra

#variables for colors to highlight the make results
yellow	= \033[33;1m
blue	= \033[36;1m
magenta = \033[35;1m
green	= \033[32;1m
normal	= \033[0m


all: $(NAME_COL) $(NAME_GRA) $(NAME_SUL)

$(NAME_COL) :
	gcc $(FLAGS) -o $@ $(DIR_SRCS)$(SRC_COL)
	@printf "$(yellow)->./$(NAME_COL) is created$(normal)\n"

$(NAME_GRA) :
	gcc $(FLAGS) -o $@ $(DIR_SRCS)$(SRC_GRA)
	@printf "$(yellow)->./$(NAME_GRA) is created$(normal)\n"

$(NAME_SUL) : $(OBJ_SUL)
	gcc $(FLAGS) -o $@ $(DIR_SRCS)$(SRC_SUL)
	@printf "$(yellow)->./$(NAME_SUL) is created$(normal)\n"


clean :
	@printf "\n$(green)clean -> ok$(normal)\n\n"

fclean : clean
	rm -rf $(NAME_COL) $(NAME_GRA) $(NAME_SUL)
	@printf "$(green)fclean -> ./Grace   ./Colleen   ./Sully"
	@printf "$(normal)\n\n"

re : fclean all

.PHONY : all clean fclean re
