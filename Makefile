# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgoizaus <dgoizaus@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 15:29:43 by dgoizaus          #+#    #+#              #
#    Updated: 2014/11/04 15:38:12 by dgoizaus         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = ./sources

HEAD = ./includes

all :
	gcc -Wextra -Werror -Wall $(SRC) -o $(NAME) -I $(HEAD)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(HEAD)

re : fclean all