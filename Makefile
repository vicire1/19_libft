# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 18:00:13 by vdecleir          #+#    #+#              #
#    Updated: 2023/11/06 11:50:54 by vdecleir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc

NAME 		= libft.a

CFLAGS 		= -Wall -Wextra -Werror

SRCS	 	= 	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_itoa.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c

SRCSBON =		_bonus_ft_lstadd_back.c \
				_bonus_ft_lstadd_front.c \
				_bonus_ft_lstlast.c \
				_bonus_ft_lstnew.c \
				_bonus_ft_lstsize.c \
				_bonus_ft_lstdelone.c \
				_bonus_ft_lstclear.c \
				_bonus_ft_lstiter.c\
				_bonus_ft_lstmap.c

INCLUDES	= -I libft.h

OBJECTS	= $(SRCS:.c=.o)

OBJECTSBON = $(SRCSBON:.c=.o)

RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME):	$(OBJECTS)
			ar -rcs $(NAME) $(OBJECTS)
			
bonus:		$(OBJECTSBON)
			ar -rcs $(NAME) $(OBJECTSBON)

all:		$(NAME)


clean:
			$(RM) $(OBJECTS) $(OBJECTSBON)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re bonus