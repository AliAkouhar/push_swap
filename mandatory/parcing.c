/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 17:44:33 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/03 17:22:17 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			print_error();
		i++;
	}
}

void	check_sign(char *str)
{
	int	i;
	int	mince;
	int	plus;

	i = 0;
	mince = 0;
	plus = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				mince++;
			if (str[i] == '+')
				plus++;
			if (str[i + 1] == '\0' || i != 0 || mince > 1 || plus > 1)
				print_error();
		}
		i++;
	}
}

void	check_repeat(t_ps *ps)
{
	int	i;
	int	j;

	i = 0;
	while (i < ps->size)
	{
		j = i + 1;
		while (j < ps->size)
		{
			if (ps->num[i] == ps->num[j])
				print_error();
			j++;
		}
		i++;
	}
}

void	ft_fill(t_stack **a, t_ps *ps)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *a;
	ps->num = malloc(ps->size * sizeof(int));
	while (i < ps->size)
	{
		ps->num[i] = (*a)->value;
		*a = (*a)->next;
		i++;
	}
	*a = tmp;
}

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
		i++;
	}
	ps->size = ft_lstsize(*a);
	ft_fill(a, ps);
	check_repeat(ps);
	ft_sort(ps);
	ft_check_sort(ps, a);
}
