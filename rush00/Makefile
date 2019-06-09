# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egenis <egenis@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/08 10:41:21 by egenis            #+#    #+#              #
#    Updated: 2019/06/08 12:57:46 by egenis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

SOURCES := $(wildcard *.cpp)
HEADERS := $(wildcard *.hpp)
OBJECTS := $(SOURCES:%.cpp=%.o) 

CC = clang++
CFLAGS = -std=c++98 -g# -Wall -Wextra -Werror

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES)
	$(CC) $(CFLAGS) -lncurses $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
