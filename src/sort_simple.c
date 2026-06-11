/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 13:50:01 by joagomes          #+#    #+#             */
/*   Updated: 2026/06/11 18:06:43 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_pos(t_node *stack)
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

static void	bring_min_to_top(t_stacks *s)
{
	int	min_pos;
	int	size;

	min_pos = find_min_pos(s->a);
	size = stack_size(s->a);
	if (min_pos <= size / 2)
	{
		while (min_pos-- > 0)
			op_ra(s);
	}
	else
	{
		min_pos = size - min_pos;
		while (min_pos-- > 0)
			op_rra(s);
	}
}

int	find_max_pos(t_node *stack)
{
	int		max;
	int		max_pos;
	int		pos;

	max = stack->value;
	max_pos = 0;
	pos = 0;
	while (stack)
	{
		if (stack->value > max)
		{
			max = stack->value;
			max_pos = pos;
		}
		pos++;
		stack = stack->next;
	}
	return (max_pos);
}

void	bring_max_to_top(t_stacks *s)
{
	int	max_pos;
	int	size;

	max_pos = find_max_pos(s->b);
	size = stack_size(s->b);
	if (max_pos <= size / 2)
	{
		while (max_pos-- > 0)
			op_rb(s);
	}
	else
	{
		max_pos = size - max_pos;
		while (max_pos-- > 0)
			op_rrb(s);
	}
}

void	sort_simple(t_stacks *s)
{
	while (stack_size(s->a) > 1)
	{
		bring_min_to_top(s);
		op_pb(s);
	}
	while (s->b)
		op_pa(s);
}

/*#include "include/push_swap.h"

int	main(void)
{
	t_stacks	s;

	s.a = NULL;
	s.b = NULL;
	push_top(&s.a, 2);
	push_top(&s.a, 4);
	push_top(&s.a, 1);
	push_top(&s.a, 3);
	sort_simple(&s);
	free_stack(&s.a);
	return (0);
}*/