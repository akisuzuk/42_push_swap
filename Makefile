# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akisuzuk <akisuzuk@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 00:50:45 by akisuzuk          #+#    #+#              #
#    Updated: 2023/11/19 01:17:26 by akisuzuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

PROGRAM = push_swap

SRCS = ./srcs/push_swap.c

OBJS = $(SRCS:.c=.o)

INC = -I ./includes

LIB = ./libft/libft.a

$(PROGRAM): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROGRAM) $(LIB) $^

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(INC)

clean :
	$(RM) $(C_OBJ) $(S_OBJ)

fclean : clean
	$(RM) $(C_NAME) $(S_NAME)

re : fclean all

.PHONEY : all clean fclean re bonus
