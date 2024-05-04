/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 09:39:45 by aakouhar          #+#    #+#             */
/*   Updated: 2024/05/04 09:44:10 by aakouhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "gnl/get_next_line.h"

#define	INT_MAX 2147483647
#define	INT_MIN	-2147483648

typedef struct stack
{
	int				value;
	struct stack	*next;
}	t_stack;

typedef struct push_swap
{
	int		*num;
	int		size;
	int		flag;
	int		range;
	int		position;
	char	**args;
	int		r;
	int		start;
	int		end;
	int		index;
}	t_ps;

#endif