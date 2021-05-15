# Makefile for libft
NAME = libft.a
FLAGS = -Wall -Wextra -Werror

sources = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c
headers = libft.h

$(NAME):
	gcc -shared $(FLAGS) -o $(NAME) $(headers) $(sources)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all



so :
	gcc -fPIC $(FLAGS) $()
	gcc -shared -o libft.so $(objects)

bonus : prerequisites
	receipt

test : prerequisites
	receipt
