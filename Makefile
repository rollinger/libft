# Makefile for libft
NAME = libft.a

objects = ft_isalpha.o

$(NAME) : $(objects)
	gcc -Wall -Wextra -Werror -o $(NAME) $(objects)

all : prerequisites
	receipt

bonus : prerequisites
	receipt

test : prerequisites
	receipt

clean :
	rm $(NAME) $(objects)

fclean : prerequisites
	receipt

re : prerequisites
	receipt

ft_isalpha.o : ft_isupper.c, ft_islower.c, ft_isalpha.c
	gcc -c ft_isupper.c, ft_islower.c, ft_isalpha.c


#ft_isspace.c, ft_isupper.c, ft_islower.c,  ft_isdigit.c,\
#ft_isalnum.c, ft_isascii.c, ft_isprint.c, ft_tolower.c, ft_toupper.c, \
#ft_strlen.c, ft_strchr.c, ft_strrchr.c, ft_strncmp.c
