/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:04:04 by joaog             #+#    #+#             */
/*   Updated: 2026/06/10 12:15:38 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	op_pb(t_stacks *s)
{
	if (!s || !s->a)
		return ;
	push_node(&s->b, &s->a);
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
	write(1, "ra\n", 3);
}

void	op_rb(t_stacks *s)
{
	if (!s || !s->b)
		return ;
	rotate(&s->b);
	write(1, "rb\n", 3);
}

void	op_rr(t_stacks *s)
{
	if (!s || !s->a || !s->b)
		return ;
	rotate(&s->a);
	rotate(&s->b);
	write(1, "rr\n", 3);
}
