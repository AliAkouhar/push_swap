/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:35:31 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/02 19:01:43 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

void	set_range(t_ps *ps)
{
	if (ps->size >= 6 && ps->size < 16)
		ps->r = 3;
	else if (ps->size <= 100 && ps->size >= 16)
		ps->r = 13;
	else if (ps->size > 100 && ps->size <= 500)
		ps->r = 29;
	else
		ps->r = 42;
}

int	find_biger(t_stack **a)
{
	int		i;
	int		max;
	t_stack	*tmp;

	i = 1;
	tmp = *a;
	max = (*a)->value;
	while (*a)
	{
		if ((*a)->value > max)
			max = (*a)->value;
		(*a) = (*a)->next;
	}
	*a = tmp;
	while (*a)
	{
		if ((*a)->value == max)
		{
			*a = tmp;
			return (i);
		}
		(*a) = (*a)->next;
		i++;
	}
	return (0);
}

int	find_smallest(t_stack *a)
{
	int		i;
	int		min;
	t_stack	*tmp;

	i = 1;
	tmp = a;
	min = (a)->value;
	while (a)
	{
		if ((a)->value < min)
			min = (a)->value;
		(a) = (a)->next;
	}
	a = tmp;
	while (a)
	{
		if ((a)->value == min)
		{
			a = tmp;
			return (i);
		}
		(a) = (a)->next;
		i++;
	}
	return (0);
}

void	push_min(t_stack **a, t_stack **b, t_ps *ps)
{
	ps->position = find_smallest(*a);
	while (1)
	{
		if (ps->flag == 4 && (*a)->value == ps->num[0])
		{
			pb(a, b);
			return ;
		}
		if ((*a)->value == ps->num[0] && !ps->flag)
		{
			pb(a, b);
			ps->flag = 1;
		}
		if ((*a)->value == ps->num[1] && ps->flag == 1)
		{
			pb(a, b);
			return ;
		}
		if (ps->position <= ps->size / 2)
			ra(a);
		else if (ps->position > ps->size / 2)
			rra(a);
	}
}
