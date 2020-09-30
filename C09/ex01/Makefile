# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcini <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 23:38:42 by vcini             #+#    #+#              #
#    Updated: 2020/09/29 19:13:41 by vcini            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c \

OBJS = $(SRC:.c=.o)

INC = includes \

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME) 

.c.o : 
	gcc $(CFLAGS) -c -o $@ $< -I $(INC)

$(NAME): ${OBJS}
	ar rcs $(NAME) ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} $(NAME)

re: fclean all

.PHONY: all clean fclean re
