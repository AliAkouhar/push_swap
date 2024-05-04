/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:35:06 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/03 17:06:38 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define	INT_MAX 2147483647
#define	INT_MIN	-2147483648

typedef struct stack
{
	int				value;
	struct stack	*next;
}	t_stack;

typedef struct push_swap
{
	int		*num;
	int		size;
	int		flag;
	int		range;
	int		position;
	char	**args;
	int		r;
	int		start;
	int		end;
	int		index;
}	t_ps;

int     print_error();
void    ft_check(char   **av, t_ps *ps, t_stack **a);
int	ft_atoi(char *str);
int	ft_isdigit(int n);
void	ft_lstadd_back(t_stack **lst,t_stack *new);
t_stack	*ft_lstnew(int	Lcontent);
t_stack	*ft_lstlast(t_stack *lst);
int	ft_lstsize(t_stack *lst);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
void    check_sign(char *str);
void    check_digit(char *str);
void    sa(t_stack  **a);
void    sb(t_stack **b);
void    ss(t_stack **a, t_stack **b);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);
void    ra(t_stack **a);
void    rb(t_stack **b);
t_stack *find_new_last(t_stack **a);
void rev_rotate(t_stack **a);
void    rra(t_stack **a);
void    rrb(t_stack **b);
void    rrr(t_stack **a, t_stack **b);
void    ft_sort(t_ps *ps);
void ft_check_sort(t_ps *ps, t_stack **a);
void    sort_two(t_stack **a);
int find_biger(t_stack **a);
void    sort_three(t_stack **a);
void    sort_five(t_stack **a, t_stack **b, t_ps *ps);
int find_smallest(t_stack *a);
void    push_min(t_stack **a, t_stack **b, t_ps *ps);
void    find_algo(t_stack **a, t_stack **b, t_ps *ps);
void    set_range(t_ps *ps);
void    ft_sorting(t_stack **a, t_stack **b, t_ps *ps);
void    ft_sorting_2(t_stack **a, t_stack **b, t_ps *ps);
void    what_should_do(t_stack **a, t_stack **b, t_ps *ps);

#endif
