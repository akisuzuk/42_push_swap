# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 00:50:45 by akisuzuk          #+#    #+#              #
#    Updated: 2023/12/30 16:53:31 by akisuzuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

PROGRAM = push_swap

SRCS = ./srcs/push_swap.c		\
		./srcs/ps_make_list.c#	\
		./srcs/ps_actions.c		\
		./srcs/ps_sort.c

OBJS = $(SRCS:.c=.o)

INC = -I ./includes

#LIB_DIR = ./libft
LIB = ./libft/libft.a

$(PROGRAM): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROGRAM) $(LIB) $^

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(INC)

clean :
#	$(RM) $(C_OBJ) $(S_OBJ) $(LIB_DIR)/*.o
	$(RM) $(C_OBJ) $(S_OBJ)
	make -C libft clean

fclean : clean
#	$(RM) $(C_NAME) $(S_NAME) $(LIB_DIR)/*.a
	$(RM) $(C_NAME) $(S_NAME) $(LIB_DIR)/*.a
	make -C libft fclean

re : fclean all

.PHONEY : all clean fclean re bonus