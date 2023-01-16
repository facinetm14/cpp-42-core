# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 23:59:47 by fakouyat          #+#    #+#              #
#    Updated: 2022/12/09 13:29:04 by fakouyat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG = -std=c++98 -Wall -Wextra -Werror

NAME = ex01

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)
		
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: clean all

.PHONY : all clean re