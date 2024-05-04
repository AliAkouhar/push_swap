/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_ab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:18:03 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/03 17:31:38 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	(*a) = (*a)->next;
	tmp->next = *b;
	*b = tmp;
}

void	pa(t_stack **a, t_stack **b)
{
	if (!a && !b)
		return ;
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	if (!a && !b)
		return ;
	push(a, b);
	write(1, "pb\n", 3);
}
