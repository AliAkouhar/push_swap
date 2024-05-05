/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:07:03 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/05 17:19:55 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

void	do_op(char *s, t_stack **a, t_stack **b)
{
	if (ft_strcmp(s, "pa\n") == 0)
		pa_bonus(a, b);
	else if (ft_strcmp(s, "pb\n") == 0)
		pb_bonus(a, b);
	else if (ft_strcmp(s, "sa\n") == 0)
		sa_bonus(a);
	else if (ft_strcmp(s, "sb\n") == 0)
		sb_bonus(b);
	else if (ft_strcmp(s, "ss\n") == 0)
		ss_bonus(a, b);
	else if (ft_strcmp(s, "ra\n") == 0)
		ra_bonus(a);
	else if (ft_strcmp(s, "rb\n") == 0)
		rb_bonus(b);
	else if (ft_strcmp(s, "rr\n") == 0)
		rr_bonus(a, b);
	else if (ft_strcmp(s, "rra\n") == 0)
		rra_bonus(a);
	else if (ft_strcmp(s, "rrb\n") == 0)
		rrb_bonus(b);
	else if (ft_strcmp(s, "rrr\n") == 0)
		rrr_bonus(a, b);
	else
		print_error();
}

void	read_op(t_stack **a, t_stack **b, t_ps *ps)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		do_op(line, a, b);
		free(line);
	}
	if (check_sort(ps, *a) && !(*b))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
