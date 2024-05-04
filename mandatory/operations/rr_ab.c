/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_ab.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:50:19 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/03 17:33:02 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*find_new_last(t_stack **a)
{
	while (*a)
	{
		if (((*a)->next)->next == NULL)
			return (*a);
		(*a) = (*a)->next;
	}
	return (NULL);
}

void	rev_rotate(t_stack **a)
{
	t_stack	*new_last;
	t_stack	*tmp;
	t_stack	*last;

	tmp = *a;
	new_last = find_new_last(a);
	*a = tmp;
	last = ft_lstlast(*a);
	*a = tmp;
	last->next = *a;
	*a = new_last->next;
	new_last->next = NULL;
}

void	rra(t_stack **a)
{
	if (!a)
		return ;
	rev_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	if (!b)
		return ;
	rev_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	if (!a || !b)
		return ;
	rev_rotate(a);
	rev_rotate(b);
	write(1, "rrr\n", 4);
}
