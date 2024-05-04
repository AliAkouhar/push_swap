/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_algo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:23:57 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/03 17:31:12 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	find_algo(t_stack **a, t_stack **b, t_ps *ps)
{
	if (ps->size == 2)
		sort_two(a);
	else if (ps->size == 3)
		sort_three(a);
	else if (ps->size == 4 || ps->size == 5)
		sort_five(a, b, ps);
	else
	{
		ft_sorting(a, b, ps);
		ft_sorting_2(a, b, ps);
	}
}
