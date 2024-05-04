/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_for_less_than_5.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:36:31 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/03 17:21:25 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_check_sort(t_ps *ps, t_stack **a)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *a;
	while (i < ps->size)
	{
		if (ps->num[i] != (*a)->value)
		{
			*a = tmp;
			return ;
		}
		i++;
		(*a) = (*a)->next;
	}
	printf("sorted\n");
	exit(0);
}

void	sort_two(t_stack **a)
{
	if ((*a)->value > ((*a)->next)->value)
		sa(a);
}

void	sort_three(t_stack **a)
{
	int	big;

	big = find_biger(a);
	if (big == 1)
		ra(a);
	else if (big == 2)
		rra(a);
	sort_two(a);
}

void	sort_five(t_stack **a, t_stack **b, t_ps *ps)
{
	ps->flag = 0;
	if (ps->size == 4)
		ps->flag = 4;
	push_min(a, b, ps);
	sort_three(a);
	if (ps->size == 5)
		pa(a, b);
	pa(a, b);
}
