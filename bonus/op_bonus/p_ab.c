/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_ab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:18:03 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 16:32:02 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static void	push(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = *a;
	(*a) = (*a)->next;
	tmp->next = *b;
	*b = tmp;
}

void	pa_bonus(t_stack **a, t_stack **b)
{
	if (!(*b))
		return ;
	push(b, a);
}

void	pb_bonus(t_stack **a, t_stack **b)
{
	if (!(*a))
		return ;
	push(a, b);
}
