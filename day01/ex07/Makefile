# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 12:29:18 by tstephen          #+#    #+#              #
#    Updated: 2019/06/03 15:11:40 by tstephen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replacer

SOURCES := $(wildcard *.cpp)
HEADERS := $(wildcard *.hpp)
OBJECTS := $(SOURCES:%.cpp=%.o) 

CC = g++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

$(NAME):
	@$(CC) $(CFLAGS) -I=$(HEADERS) -c $(SOURCES)
	@$(CC) $(CFLAGS) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf $(OBJECTS) 

fclean: clean
	@rm -rf $(NAME)

re: fclean all