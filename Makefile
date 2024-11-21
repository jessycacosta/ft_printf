# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jecosta <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 19:40:34 by jecosta           #+#    #+#              #
#    Updated: 2024/11/20 20:39:47 by jecosta          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc 
CFLAGS = -Wall -Wextra -Werror -g
AR = ar rcs
RM = rm -rf
SRCS = ft_printf.c \
	print_char.c \
	print_str.c \
	print_nbr.c \
	print_nbr_u.c \
	print_hexa.c \
	print_ptr.c \
	ft_strlen.c \
	ft_strchr.c
		
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
