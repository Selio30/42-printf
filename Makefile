# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbarbero <sbarbero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 21:20:18 by sbarbero          #+#    #+#              #
#    Updated: 2023/05/15 22:04:21 by sbarbero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SOURCE	= ft_printf.c ft_putchar.c ft_putstr.c
OBJECT	= $(SOURCE:.c=.o)

FLAGS	= -Wall -Werror -Wextra
INCLUDE	= ft_printf.h

LIB		= ar rcs
RM		= rm -f

all: $(NAME)

$(NAME): $(OBJECT) $(INCLUDE)
	@$(LIB) $(NAME) $(OBJECT)

%.o: %.c
	@gcc $(FLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJECT)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re