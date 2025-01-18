# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amabbadi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/19 00:15:45 by amabbadi          #+#    #+#              #
#    Updated: 2025/01/19 00:15:50 by amabbadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = printf.c hexa_utils.c non_hexautils.c

OBJS = $(SRCS:.c=.o)

CC = cc

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean
