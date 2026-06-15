/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:04:04 by joaog             #+#    #+#             */
/*   Updated: 2026/06/12 14:36:59 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	op_pb(t_stacks *s)
{
	if (!s || !s->a)
		return ;
	push_node(&s->b, &s->a);
	s->ops[4]++;
	write(1, "pb\n", 3);
}

static void	rotate(t_node **stack)
{
	t_node	*top;
	t_node	*last;

	if (!*stack || !(*stack)->next)
		return ;
	top = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	*stack = top->next;
	last->next = top;
	top->next = NULL;
}

void	op_ra(t_stacks *s)
{
	if (!s || !s->a)
		return ;
	rotate(&s->a);
	s->ops[5]++;
	write(1, "ra\n", 3);
}

void	op_rb(t_stacks *s)
{
	if (!s || !s->b)
		return ;
	rotate(&s->b);
	s->ops[6]++;
	write(1, "rb\n", 3);
}

void	op_rr(t_stacks *s)
{
	if (!s || !s->a || !s->b)
		return ;
	rotate(&s->a);
	rotate(&s->b);
	s->ops[7]++;
	write(1, "rr\n", 3);
}
