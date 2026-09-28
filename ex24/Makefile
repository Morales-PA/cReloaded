# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juan <juan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/28 15:41:37 by juan              #+#    #+#              #
#    Updated: 2026/09/28 15:41:43 by juan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CC_FLAGS = -Wall -Wextra -Werror 
NAME = libft.a
SRC = srcs/*.c
OBJ = *.o
INCLUDES = includes/*.h

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) -c $(SRC) $(CC_FLAGS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all