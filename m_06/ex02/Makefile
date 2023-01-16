# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/26 16:43:24 by fakouyat          #+#    #+#              #
#    Updated: 2022/12/26 16:43:24 by fakouyat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

SRCS = Base.cpp main.cpp

CXX = c++

FLAG = -std=c++98 -Wall -Wextra -Werror

OBJ = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	 $(CXX) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re
