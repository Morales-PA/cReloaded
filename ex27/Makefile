# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan <juan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/28 15:42:13 by juan              #+#    #+#              #
#    Updated: 2026/09/28 15:42:15 by juan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CC_FlAGS = -Wall -Wextra -Werror
NAME = ft_display_file
SRC = *.c
OBJ = *.o

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(SRC) -o $(NAME) $(CC_FLAGS)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all