# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: prolling <prolling@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/15 17:05:05 by prolling          #+#    #+#              #
#    Updated: 2021/05/26 13:47:05 by prolling         ###   ########.fr        #
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

OBJS		=	$(sources) #$(sources:.c=.o)
OBJS_BONUS	=	$(sources_bonus) #$(sources_bonus:.c=.o)
OBJS_OWN	=	$(sources_own) #$(sources_own:.c=.o)

ifdef WITH_BONUS
	OBJ_SWITCH = $(OBJS) $(OBJS_BONUS)
else
	OBJ_SWITCH = $(OBJS)
endif

NAME = libft.a

FLAGS = -Wall -Wextra -Werror
CC = gcc
LIB = ar rc #su

#$(NAME): clean $(OBJ_SWITCH) $(OBJS_OWN)
#	$(LIB) $@ $^

$(NAME): clean
	gcc -c -Wall -Wextra -Werror $(OBJ_SWITCH) $(OBJS_OWN)
	ar rc $(NAME) *.o
	ranlib $(NAME)
	rm -f *.o *.gch

all:  bonus $(NAME)

bonus:
	$(MAKE) WITH_BONUS=1 $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re : fclean all

so: clean
	#$(CC) -fPIC $(FLAGS) $(OBJ_SWITCH:.o=.c) $(OBJS_OWN:.o=.c)
	gcc -shared -o libft.so $(OBJS) $(OBJS_BONUS) $(OBJS_OWN)

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
