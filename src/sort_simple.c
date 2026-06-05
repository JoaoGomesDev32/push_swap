/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:50:01 by joagomes          #+#    #+#             */
/*   Updated: 2026/06/05 14:55:38 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	find_min_pos(t_node *stack)
{
	int	min;
	int	min_pos;
	int	pos;

	min = stack->value;
	min_pos = 0;
	pos = 0;
	while (stack)
	{
		if (stack->value < min)
		{
			min = stack->value;
			min_pos = pos;
		}
		pos++;
		stack = stack->next;
	}
	return (min_pos);
}

void	bring_min_to_top(t_stacks *s)
{
	int	min_pos;

	min_pos = find_min_pos(s->a);
	while (min_pos > 0)
	{
		op_ra(s);
		min_pos--;
	}
}
