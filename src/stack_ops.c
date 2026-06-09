/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminks-g <fminks-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:15:44 by joaog             #+#    #+#             */
/*   Updated: 2026/06/09 11:26:51 by fminks-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	peek_top(t_node *stack)
{
	if (!stack)
		return (0);
	return (stack->value);
}

int	stack_size(t_node *stack)
{
	int	node_size;

	if (!stack)
		return (0);
	node_size = 0;
	while (stack)
	{
		node_size++;
		stack = stack->next;
	}
	return (node_size);
}
/*
criar uma main.c para testar os nós

#include "include/push_swap.h"
#include <stdio.h>

int	main(void)
{
	t_stacks	s;

	s.a = NULL;
	s.b = NULL;
	push_top(&s.a, 3);
	push_top(&s.a, 1);
	push_top(&s.a, 2);
	printf("topo: %d\n", peek_top(s.a));
	printf("tamanho: %d\n", stack_size(s.a));
	printf("pop: %d\n", pop_top(&s.a));
	printf("topo depois: %d\n", peek_top(s.a));
	free_stack(&s.a);
	return (0);
}
*/