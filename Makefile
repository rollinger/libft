# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 17:05:05 by prolling          #+#    #+#              #
#    Updated: 2021/05/15 17:26:19 by prolling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror

sources = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_tolower.c ft_toupper.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_isspace.c ft_isupper.c ft_islower.c
headers = libft.h

$(NAME):
	gcc -shared $(FLAGS) -o $(NAME) $(headers) $(sources)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all


#
#so :
#	gcc -fPIC $(FLAGS) $()
#	gcc -shared -o libft.so $(objects)
#
#bonus : prerequisites
#	receipt
#
#test : prerequisites
#	receipt
