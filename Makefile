# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 17:05:05 by prolling          #+#    #+#              #
#    Updated: 2021/05/23 21:20:21 by prolling         ###   ########.fr        #
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
sources_bonus = ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstdelone_bonus.c \
	ft_lstiter_bonus.c ft_lstclear_bonus.c
headers = libft.h
headers_bonus = libft_bonus.h

SRCOBJ = ${sources:.c.o}
BONOBJ = ${sources_bonus:.c.o}

$(NAME):
	gcc -shared $(FLAGS) -o $(NAME) $(headers) $(sources)

bonus :

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
