NAME = push_swap
CC = CC
CFLAGS = -Wall -Wextra -Werror
CFILS = mandatory/algo.c mandatory/algo_for_less_than_5.c mandatory/errors.c mandatory/main.c mandatory/parcing.c mandatory/which_algo.c
CFILS +=  utils/ft_atoi.c utils/ft_isdigit.c utils/ft_lstadd_back_bonus.c utils/ft_lstlast_bonus.c utils/ft_lstnew_bonus.c
CFILS += utils/ft_lstsize_bonus.c utils/ft_split.c utils/ft_strlen.c utils/utils.c
CFILS += mandatory/operations/p_ab.c mandatory/operations/r_ab.c mandatory/operations/rr_ab.c mandatory/operations/s_ab.c
OFILS = $(CFILS:.c=.o)
all : $(NAME)

$(NAME) : $(OFILS)
	$(CC) $(CFLAGS) -o $(NAME) $(OFILS)
clean :
	rm -rf  $(OFILS)
	@clear
fclean : clean
	rm -rf $(NAME)
	@clear
re : re all
.PHONY : re all clean fclean

