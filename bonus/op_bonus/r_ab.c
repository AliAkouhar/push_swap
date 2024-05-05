/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_ab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:23:17 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 17:20:32 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static void	rotate(t_stack **a)
{
	t_stack	*last;
	t_stack	*tmp;

	last = ft_lstlast(*a);
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	last->next = tmp;
}

void	ra_bonus(t_stack **a)
{
	if (!(*a))
		return ;
	rotate(a);
}

void	rb_bonus(t_stack **b)
{
	if (!(*b))
		return ;
	rotate(b);
}

void	rr_bonus(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*b))
		return ;
	rotate(a);
	rotate(b);
}
