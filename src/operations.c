/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 11:35:05 by joaog             #+#    #+#             */
/*   Updated: 2026/06/04 13:56:13 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap(t_node **stack)
{
	int	first;
	int	second;

	if (!*stack || !(*stack)->next)
		return ;
	first = pop_top(stack);
	second = pop_top(stack);
	push_top(stack, first);
	push_top(stack, second);
}

void	op_sa(t_stacks *s)
{
	if (!s)
		return ;
	swap(&s->a);
	write(1, "sa\n", 3);
}

void	op_sb(t_stacks *s)
{
	if (!s)
		return ;
	swap(&s->b);
	write(1, "sb\n", 3);
}

void	op_ss(t_stacks *s)
{
	if (!s)
		return ;
	swap(&s->a);
	swap(&s->b);
	write(1, "ss\n", 3);
}

void	op_pa(t_stacks *s)
{
	if (!s || !s->b)
		return ;
	push_top(&s->a, pop_top(&s->b));
	write(1, "pa\n", 3);
}
