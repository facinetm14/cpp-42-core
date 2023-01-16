# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 23:59:47 by fakouyat          #+#    #+#              #
#    Updated: 2022/12/08 01:05:19 by fakouyat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAG = -std=c++98 -Wall -Wextra -Werror

NAME = ex00

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAG) -o $(NAME) $(OBJ)
		
clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: clean all

.PHONY : all clean re