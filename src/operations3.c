/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:06:25 by joaog             #+#    #+#             */
/*   Updated: 2026/06/04 14:27:46 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	rev_rotate(t_node **stack)
{
	t_node	*last;
	t_node	*prev;

	if (!*stack || !(*stack)->next)
		return ;
	prev = NULL;
	last = *stack;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	op_rra(t_stacks *s)
{
	if (!s || !s->a)
		return ;
	rev_rotate(&s->a);
	write(1, "rra\n", 4);
}

void	op_rrb(t_stacks *s)
{
	if (!s || !s->b)
		return ;
	rev_rotate(&s->b);
	write(1, "rrb\n", 4);
}

void	op_rrr(t_stacks *s)
{
	if (!s || !s->a || !s->b)
		return ;
	rev_rotate(&s->a);
	rev_rotate(&s->b);
	write(1, "rrr\n", 4);
}
