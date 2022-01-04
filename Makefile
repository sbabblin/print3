# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbabblin <sbabblin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/27 23:55:35 by sbabblin          #+#    #+#              #
#    Updated: 2021/12/27 21:33:09 by sbabblin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_itoa.c ft_printf_adres.c ft_printf_char.c ft_printf_int.c ft_printf_sixt.c ft_printf_str.c ft_printf_uns.c ft_printf.c lib.c 

OBJ = $(patsubst %.c,%.o,$(SRCS))

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

%.o : %.c
	gcc $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
