/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_ab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:57:11 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 16:35:05 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

static void	swap(t_stack **ab)
{
	t_stack	*tmp;

	tmp = *ab;
	*ab = (*ab)->next;
	tmp->next = (*ab)->next;
	(*ab)->next = tmp;
}

void	sa_bonus(t_stack **a)
{
	if (!(*a))
		return ;
	swap(a);
}

void	sb_bonus(t_stack **b)
{
	if (!(*b))
		return ;
	swap(b);
}

void	ss_bonus(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*b))
		return ;
	swap(a);
	swap(b);
}
