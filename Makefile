# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akisuzuk <akisuzuk@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 00:50:45 by akisuzuk          #+#    #+#              #
#    Updated: 2023/12/17 12:47:40 by akisuzuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# せっかくなのでfcleanでlibftフォルダ内の.oとかも消したいので、onedriveのメモ参照

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

PROGRAM = push_swap

SRCS = ./srcs/push_swap.c
		./srcs/ps_make_list.c
		./srcs/ps_actions.c
		./srcs/ps_sort.c

OBJS = $(SRCS:.c=.o)

INC = -I ./includes

LIB_DIR = ./libft
LIB = ./libft/libft.a

$(PROGRAM): $(OBJS) $(LIB)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROGRAM) $(LIB) $^

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) $(INC)

clean :
	$(RM) $(C_OBJ) $(S_OBJ) $(LIB_DIR)/*.o

fclean : clean
	$(RM) $(C_NAME) $(S_NAME) $(LIB_DIR)/*.a

re : fclean all

.PHONEY : all clean fclean re bonus