# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/14 00:40:35 by tstephen          #+#    #+#              #
#    Updated: 2019/06/14 00:40:46 by tstephen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

SOURCES := $(wildcard *.cpp)
HEADERS := $(wildcard *.hpp)
OBJECTS := $(SOURCES:%.cpp=%.o) 

CC = clang++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -Wno-conversion

$(NAME):
	$(CC) $(CFLAGS) -I="$(HEADERS)" -c $(SOURCES)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all