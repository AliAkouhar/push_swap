/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_ab.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:23:17 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/03 17:32:45 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	ra(t_stack **a)
{
	if (!a)
		return ;
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	if (!b)
		return ;
	rotate(b);
	write(1, "rb\n", 3);
}
