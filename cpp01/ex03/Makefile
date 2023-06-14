# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwee <lwee@student.42adel.org.au>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/11 19:09:51 by lwee              #+#    #+#              #
#    Updated: 2023/06/11 19:09:51 by lwee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = HumanAttack

CC      = g++
CFLAGS  = -Werror -Wextra -Wall -std=c++98

SRC     = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ     = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp *.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean