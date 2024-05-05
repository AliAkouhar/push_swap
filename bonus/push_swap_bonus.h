/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 09:39:45 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 17:10:47 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../mandatory/push_swap.h"
# include "gnl/get_next_line.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

void	print_error(void);
void	ft_check(char **av, t_ps *ps, t_stack **a);
void	rev_rotate(t_stack **a);
t_stack	*find_new_last(t_stack **a);
void	check_sign(char *str);
void	check_digit(char *str);
void	sa_bonus(t_stack **a);
void	sb_bonus(t_stack **b);
void	ss_bonus(t_stack **a, t_stack **b);
void	pa_bonus(t_stack **a, t_stack **b);
void	pb_bonus(t_stack **a, t_stack **b);
void	ra_bonus(t_stack **a);
void	rb_bonus(t_stack **b);
void	rr_bonus(t_stack **a, t_stack **b);
void	rev_rotate(t_stack **a);
void	rra_bonus(t_stack **a);
void	rrb_bonus(t_stack **b);
void	rrr_bonus(t_stack **a, t_stack **b);
void	ft_check_sort(t_ps *ps, t_stack **a);
void	ft_sort(t_ps *ps);
int		check_sort(t_ps *ps, t_stack *a);
void	read_op(t_stack **a, t_stack **b, t_ps *ps);
void	do_op(char *s, t_stack **a, t_stack **b);
void	ft_free2(char **arr);

#endif