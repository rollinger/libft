# Makefile for libft
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

objects = ft_isalpha.o ft_isdigit.o ft_isalnum.o

$(NAME) : $(objects)
	gcc $(FLAGS) -o $(NAME) $(objects)

all : prerequisites
	receipt

bonus : prerequisites
	receipt

test : prerequisites
	receipt

clean :
	rm -f $(NAME) $(objects)

fclean : prerequisites
	receipt

re : prerequisites
	receipt

ft_isalpha.o : ft_isupper.c ft_islower.c
	gcc -c ft_isalpha.cc
ft_isdigit.o :
	gcc -c ft_isdigit.c
ft_isalnum.o :
	gcc -c ft_isalnum.c

#ft_isspace.c, ft_isupper.c, ft_islower.c,
#, ft_isascii.c, ft_isprint.c, ft_tolower.c, ft_toupper.c, \
#ft_strlen.c, ft_strchr.c, ft_strrchr.c, ft_strncmp.c
