/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 11:35:05 by joaog             #+#    #+#             */
/*   Updated: 2026/06/12 14:35:08 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	swap(t_node **stack)
{
	t_node	*first;
	t_node	*second;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
}

void	op_sa(t_stacks *s)
{
	if (!s)
		return ;
	swap(&s->a);
	s->ops[0]++;
	write(1, "sa\n", 3);
}

void	op_sb(t_stacks *s)
{
	if (!s)
		return ;
	swap(&s->b);
	s->ops[1]++;
	write(1, "sb\n", 3);
}

void	op_ss(t_stacks *s)
{
	if (!s)
		return ;
	swap(&s->a);
	swap(&s->b);
	s->ops[2]++;
	write(1, "ss\n", 3);
}

void	op_pa(t_stacks *s)
{
	if (!s || !s->b)
		return ;
	push_node(&s->a, &s->b);
	s->ops[3]++;
	write(1, "pa\n", 3);
}
