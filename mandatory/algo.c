/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:06:10 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/03 17:28:33 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_stack *a, t_ps *ps)
{
	int	i;

	i = 0;
	while (a)
	{
		if (((a->value >= ps->num[ps->start] && a->value <= ps->num[ps->end])
				|| a->value < ps->num[ps->start]) && i <= ft_lstsize(a) / 2)
			return (1);
		else if (((a->value >= ps->num[ps->start]
					&& a->value <= ps->num[ps->end])
				|| a->value < ps->num[ps->start]) && i > ft_lstsize(a) / 2)
			return (2);
		i++;
		a = a->next;
	}
	return (0);
}

void	what_should_do(t_stack **a, t_stack **b, t_ps *ps)
{
	if ((*a)->value >= ps->num[ps->start] && (*a)->value <= ps->num[ps->end])
	{
		pb(a, b);
		if (ft_lstsize(*b) >= 2 && (*b)->value < ((*b)->next)->value)
			sb(b);
		ps->index++;
	}
	else if ((*a)->value < ps->num[ps->start])
	{
		pb(a, b);
		rb(b);
		ps->index++;
	}
	else if ((*a)->value > ps->num[ps->end])
	{
		if (get_index(*a, ps) == 1)
			ra(a);
		else if (get_index(*a, ps) == 2)
			rra(a);
	}
}

void	ft_sorting(t_stack **a, t_stack **b, t_ps *ps)
{
	ps->index = 0;
	set_range(ps);
	while ((*a))
	{
		ps->start = ps->index;
		ps->end = ps->r + (ps->index - 1);
		if (ps->end >= ps->size)
		{
			ps->end = ps->size - 1;
			ps->start = ps->end - ps->r;
		}
		what_should_do(a, b, ps);
	}
}

void	ft_sorting_2(t_stack **a, t_stack **b, t_ps *ps)
{
	while (*b)
	{
		ps->position = find_biger(b);
		if (ps->position == 1)
			pa(a, b);
		else if (ps->position <= ft_lstsize(*b) / 2)
			rb(b);
		else
			rrb(b);
	}
}
