# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/26 22:06:25 by tstephen          #+#    #+#              #
#    Updated: 2019/05/26 22:51:59 by tstephen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SOURCES := $(wildcard *.cpp)
HEADERS := $(wildcard *.hpp)
OBJECTS := $(SOURCES:%.cpp=%.o) 

CC = g++
CFLAGS = -Wall -Wextra -Werror

$(NAME):
	$(CC) $(CFLAGS) -I=$(HEADERS) -c $(SOURCES)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all