# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmorales <jmorales@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/28 17:07:43 by jmorales          #+#    #+#              #
#    Updated: 2026/09/28 17:08:50 by jmorales         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c

all:
	gcc -c -Wall -Werror -Wextra $(SRC)
	gcc -o $(NAME) $(NAME).o

clean:
	/bin/rm -f $(NAME).o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
