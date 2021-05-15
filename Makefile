# Makefile for libft
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

objects = ft_isalpha.o ft_isdigit.o ft_isalnum.o
headers = libft.h

$(NAME) : $(objects)
	gcc $(FLAGS) -o $(NAME) $(headers) $(objects)

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

ft_isalpha.o : libft.h ft_isupper.c ft_islower.c
	gcc $(FLAGS) -c ft_isalpha.c
ft_isdigit.o :
	gcc $(FLAGS) -c ft_isdigit.c
ft_isalnum.o : libft.h ft_isalpha.c ft_isdigit.c
	gcc $(FLAGS) -c ft_isalnum.c

#ft_isspace.c, ft_isupper.c, ft_islower.c,
#, ft_isascii.c, ft_isprint.c, ft_tolower.c, ft_toupper.c, \
#ft_strlen.c, ft_strchr.c, ft_strrchr.c, ft_strncmp.c
