/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:44:35 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/03 17:30:56 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort(t_ps *ps)
{
	int	i;
	int	j;
	int	min;

	i = 0;
	while (i < ps->size - 1)
	{
		min = i;
		j = i + 1;
		while (j < ps->size)
		{
			if (ps->num[j] < ps->num[min])
				min = j;
			j++;
		}
		ft_swap(&ps->num[min], &ps->num[i]);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_ps	ps;

	(void)av;
	if (ac < 2)
		print_error();
	a = NULL;
	b = NULL;
	ft_check(av, &ps, &a);
	find_algo(&a, &b, &ps);
}
