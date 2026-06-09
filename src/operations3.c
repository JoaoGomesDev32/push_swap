/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminks-g <fminks-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:06:25 by joaog             #+#    #+#             */
/*   Updated: 2026/06/09 11:28:15 by fminks-g         ###   ########.fr       */
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

/*
#include "include/push_swap.h"

int	main(void)
{
    t_stacks	s;

    s.a = NULL;
    s.b = NULL;
    push_top(&s.a, 3);
    push_top(&s.a, 1);
    push_top(&s.a, 2);
    op_sa(&s);
    op_ra(&s);
    free_stack(&s.a);
    return (0);
}
*/