/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:57:11 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 16:48:42 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	swap(t_stack **ab)
{
	t_stack	*tmp;

	tmp = *ab;
	*ab = (*ab)->next;
	tmp->next = (*ab)->next;
	(*ab)->next = tmp;
}

void	sa(t_stack **a)
{
	if (!(*a))
		return ;
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	if (!(*b))
		return ;
	swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*b))
		return ;
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
