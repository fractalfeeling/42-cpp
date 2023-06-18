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

NAME    = a.out

CC      = g++
CFLAGS  = -Werror -Wextra -Wall -std=c++98

SRC     = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ     = $(SRC:.cpp=.o)
HEADER  = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean