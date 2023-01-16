# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 03:02:32 by fakouyat          #+#    #+#              #
#    Updated: 2022/11/22 03:02:32 by fakouyat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG = -std=c++98 -Wall -Wextra -Werror

NAME = ex02

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(FLAG) -o $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re:	clean all

.PHONY : all clean re
