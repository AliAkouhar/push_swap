/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:22:34 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 17:10:35 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_check(char **av, t_ps *ps, t_stack **a)
{
	int	i;
	int	j;
	int	num;

	i = 1;
	while (av[i])
	{
		ps->args = ft_split(av[i], ' ');
		if (!ps->args[0])
			print_error();
		j = 0;
		while (ps->args[j])
		{
			num = ft_atoi(ps->args[j]);
			ft_lstadd_back(a, ft_lstnew(num));
			j++;
		}
		ft_free2(ps->args);
		i++;
	}
	ps->size = ft_lstsize(*a);
	ft_fill_stack(a, ps);
	check_repeat(ps);
	ft_sort(ps);
	check_sort(ps, *a);
}
