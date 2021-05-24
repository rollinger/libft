# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 17:05:05 by prolling          #+#    #+#              #
#    Updated: 2021/05/24 08:43:47 by prolling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror

sources = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_tolower.c ft_toupper.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_isspace.c ft_isupper.c ft_islower.c ft_memcmp.c ft_memset.c ft_memcpy.c \
	ft_calloc.c ft_memmove.c ft_memchr.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c \
	ft_bzero.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	ft_atoi.c ft_putnbr_fd.c ft_memccpy.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c
sources_bonus = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstadd_front.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c
headers = libft.h

SRCOBJ = ${sources:.c.o}
BONOBJ = ${sources_bonus:.c.o}

$(NAME):
	gcc -shared $(FLAGS) -o $(NAME) $(headers) $(sources)

bonus:
	gcc -shared $(FLAGS) -o $(NAME) $(headers) $(sources) $(sources_bonus)

all: $(NAME)

clean:
	rm -f *.o *.a

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
