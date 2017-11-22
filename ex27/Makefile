# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lapain <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 17:58:49 by lapain            #+#    #+#              #
#    Updated: 2017/11/13 18:58:21 by lapain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC = ft_display_file.c

OBJ = ft_display_file.o

HEADER = ft_display_file.h

RM = rm -rf


all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) -o $(NAME) $(OBJ)

$(OBJ) : $(SRC) $(HEADER)
		$(CC) $(CFLAGS) -o $(OBJ) -c $(SRC)

clean :
		$(RM) $(OBJ)

fclean : clean
		$(RM) $(NAME)
