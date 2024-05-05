/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 10:39:50 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 17:10:44 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	check_sort(t_ps *ps, t_stack *a)
{
	int	i;

	i = 0;
	while (i < ps->size)
	{
		if (ps->num[i] != (a)->value)
			return (0);
		i++;
		(a) = (a)->next;
	}
	return (1);
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

void	ft_free2(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	print_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_ps	ps;

	if (ac < 2)
		print_error();
	a = NULL;
	b = NULL;
	ft_check(av, &ps, &a);
	read_op(&a, &b, &ps);
	free(ps.num);
}
