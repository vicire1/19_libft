# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vdecleir <vdecleir@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 18:00:13 by vdecleir          #+#    #+#              #
#    Updated: 2023/10/17 18:04:34 by vdecleir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= cc

NAME 		= libft.a

CFLAGS 		= -Wall -Wextra -Werror

SRCSDIR 	= *.c

INCLUDESDIR	= -I libft.h

MY_OBJECTS	= $(SRCSDIR:.c=.o)

RM			= rm -f

%.o:		%.c
			$(CC) $(CFLAGS) $(INCLUDESDIR) -c $< -o $@

$(NAME):	$(MY_OBJECTS)
			ar -rcs $(NAME) $(MY_OBJECTS)

all:		$(NAME)


clean:
			$(RM) $(MY_OBJECTS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY: 	all clean fclean re