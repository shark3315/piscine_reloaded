NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRCS = ./srcs/ft_putchar.c \
		./srcs/ft_putstr.c \
		./srcs/ft_strcmp.c \
		./srcs/ft_strlen.c \
		./srcs/ft_swap.c

OBJS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

RM = rm -rf


all : $(NAME)

$(NAME) :

	$(CC) $(CFLAGS) -I ./includes/ -c $(SRCS)
	ar r $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all
