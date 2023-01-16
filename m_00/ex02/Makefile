# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 17:55:04 by fakouyat          #+#    #+#              #
#    Updated: 2022/11/03 17:55:04 by fakouyat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fakouyat <fakouyat@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 00:58:47 by fakouyat          #+#    #+#              #
#    Updated: 2022/11/02 00:58:47 by fakouyat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = Account.cpp tests.cpp

OBJ_FILES = ${SRCS:.cpp=.o}

CC = g++

FLAG = -std=c++98 -Wall -Wextra -Werror -I.

NAME = bank_app

all : $(NAME)

$(NAME) : $(OBJ_FILES)
		$(CC) $(FLAG) -o $(NAME) $(OBJ_FILES)

clean :
	rm -rf $(OBJ_FILES)

fclean : clean
	rm -rf $(NAME)

re:	fclean all

.PHONY : all fclean clean re