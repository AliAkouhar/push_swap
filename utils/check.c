/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 14:26:48 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 17:16:21 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

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

void	ft_fill_stack(t_stack **a, t_ps *ps)
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
