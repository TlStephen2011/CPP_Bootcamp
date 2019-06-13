# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/13 16:28:42 by tstephen          #+#    #+#              #
#    Updated: 2019/06/13 16:28:50 by tstephen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serializer

SOURCES := $(wildcard *.cpp)
HEADERS := $(wildcard *.hpp)
OBJECTS := $(SOURCES:%.cpp=%.o) 

CC = clang++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -Wno-conversion

$(NAME):
	$(CC) $(CFLAGS) -I=$(HEADERS) -c $(SOURCES)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all