# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstephen <tstephen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/26 15:52:04 by tstephen          #+#    #+#              #
#    Updated: 2019/05/26 16:02:58 by tstephen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := megaphone

$(NAME):
	g++ -Wall -Wextra -Werror -c megaphone.cpp
	g++ -Wall -Wextra -Werror megaphone.o -o megaphone

all: $(NAME)

clean:
	rm -rf megaphone.o

fclean: clean
	rm -rf megaphone

re: fclean all
