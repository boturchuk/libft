# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboturch <mboturch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 15:19:21 by mboturch          #+#    #+#              #
#    Updated: 2019/10/21 23:25:54 by mboturch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -c
AR = ar rc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h
SRC = *.c
OBJ = *.o


$(NAME):
		$(CC) $(CFLAGS) $(SRC)
		$(AR) $(NAME) $(OBJ)
		

clean:
				-rm -f $(OBJ)

fclean: clean
				-rm -f $(NAME)

re: fclean all
all: $(NAME)