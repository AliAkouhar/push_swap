# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/05 14:30:51 by aakouhar          #+#    #+#              #
#    Updated: 2024/05/05 17:17:52 by aakouhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror

CFILS = mandatory/algo.c mandatory/algo_for_less_than_5.c mandatory/main.c mandatory/parcing.c mandatory/which_algo.c
CFILS += utils/ft_atoi.c utils/ft_isdigit.c utils/ft_lstadd_back_bonus.c utils/ft_lstlast_bonus.c utils/ft_lstnew_bonus.c
CFILS += utils/ft_lstsize_bonus.c utils/ft_split.c utils/utils.c utils/check.c
CFILS += mandatory/operations/p_ab.c mandatory/operations/r_ab.c mandatory/operations/rr_ab.c mandatory/operations/s_ab.c

BFILE = bonus/checker_bonus.c bonus/main_bonus.c bonus/parcing_bonus.c bonus/gnl/get_next_line.c bonus/gnl/get_next_line_utils.c utils/ft_split.c
BFILE += bonus/op_bonus/p_ab.c  bonus/op_bonus/r_ab.c  bonus/op_bonus/rr_ab.c bonus/op_bonus/s_ab.c utils/ft_lstsize_bonus.c
BFILE += utils/check.c utils/ft_atoi.c utils/ft_isdigit.c utils/ft_lstadd_back_bonus.c utils/ft_lstlast_bonus.c utils/ft_lstnew_bonus.c

OFILS = $(CFILS:.c=.o)
OFILS_BONUS = $(BFILE:.c=.o)

all : $(NAME)

$(NAME) : $(OFILS)
	$(CC) $(CFLAGS) -o $(NAME) $(OFILS)

bonus : $(NAME_BONUS)

$(NAME_BONUS) : $(OFILS_BONUS)
	$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OFILS_BONUS)

clean :
	rm -rf  $(OFILS) $(OFILS_BONUS)
	@clear

fclean : clean
	rm -rf $(NAME) $(NAME_BONUS)
	@clear

re : fclean all
.PHONY : re all clean fclean
