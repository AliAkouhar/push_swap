/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_ab.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:50:19 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 16:07:44 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

t_stack	*find_new_last_bonus(t_stack **a)
{
	while (*a)
	{
		if (((*a)->next)->next == NULL)
			return (*a);
		(*a) = (*a)->next;
	}
	return (NULL);
}

void	rev_rotate_bonus(t_stack **a)
{
	t_stack	*new_last;
	t_stack	*tmp;
	t_stack	*last;

	tmp = *a;
	new_last = find_new_last_bonus(a);
	*a = tmp;
	last = ft_lstlast(*a);
	*a = tmp;
	last->next = *a;
	*a = new_last->next;
	new_last->next = NULL;
}

void	rra_bonus(t_stack **a)
{
	if (!(*a))
		return ;
	rev_rotate_bonus(a);
}

void	rrb_bonus(t_stack **b)
{
	if (!(*b))
		return ;
	rev_rotate_bonus(b);
}

void	rrr_bonus(t_stack **a, t_stack **b)
{
	if (!(*a) || !(*b))
		return ;
	rev_rotate_bonus(a);
	rev_rotate_bonus(b);
}
