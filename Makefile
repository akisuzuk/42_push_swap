# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akisuzuk <akisuzuk@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 00:50:45 by akisuzuk          #+#    #+#              #
#    Updated: 2024/01/02 15:19:57 by akisuzuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= push_swap

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
#DEBUG = -g -fsanitize=address  -fsanitize=undefined

LIB_DIR = ./libft
LIB = ./libft/libft.a
SRC_DIR = ./srcs
SRCS = ./srcs/push_swap.c		\
		./srcs/ps_make_list.c
#		./srcs/ps_actions.c
#		./srcs/ps_sort.c
OBJS = $(SRCS:.c=.o)

INC = -I ./includes

all : $(NAME)

# makefile, 自分より上の行で定義された変数しか使えないことに注意
$(LIB):
	$(MAKE) -C ./libft

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(INC)

$(NAME): $(OBJS) $(LIB)
#	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIB) $^
	$(CC) $(CFLAGS) -o $(NAME) $^


clean :
	$(RM) $(OBJS)
	make -C libft clean

fclean : clean
	$(RM) $(NAME)
	make -C libft fclean

re : fclean all

.PHONEY : all clean fclean re bonus
