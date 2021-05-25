# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 17:05:05 by prolling          #+#    #+#              #
#    Updated: 2021/05/25 15:14:22 by prolling         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

sources = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_tolower.c ft_toupper.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	ft_memcmp.c ft_memset.c ft_memcpy.c ft_calloc.c ft_memmove.c ft_memchr.c \
	ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_bzero.c ft_strdup.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_atoi.c ft_putnbr_fd.c \
	ft_memccpy.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c \
	ft_strmapi.c
sources_bonus = ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstadd_front.c ft_lstdelone.c ft_lstiter.c ft_lstclear.c ft_lstmap.c
sources_own = ft_isupper_bonus.c ft_islower_bonus.c ft_isspace_bonus.c
headers = libft.h

OBJS		=	$(sources:.c=.o)
OBJS_BONUS	=	$(sources_bonus:.c=.o)
OBJS_OWN	=	$(sources_own:.c=.o)

ifdef WITH_BONUS
	OBJ_SWITCH = $(OBJS_BONUS)
else
	OBJ_SWITCH = $(OBJS)
endif

NAME = libft.a

FLAGS = -Wall -Wextra -Werror
CC = gcc
LIB = ar rcs #u

$(NAME): $(OBJ_SWITCH) $(OBJS_OWN)
	$(LIB) $@ $^

all:  bonus $(NAME)

bonus:
	$(MAKE) WITH_BONUS=1 $(NAME)

clean:
	rm -f $(OBJS) $(OBJS_BONUS) $(OBJS_OWN)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY:	all clean fclean re bonus
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
#$(NAME):
#	gcc -shared $(FLAGS) -o $(NAME) $(headers) $(sources)
#	#ar rcu $(NAME)
#
#bonus:
#	gcc -shared $(FLAGS) -o $(NAME) $(headers) $(sources) $(sources_bonus)
#	#ar rcu $(NAME)
