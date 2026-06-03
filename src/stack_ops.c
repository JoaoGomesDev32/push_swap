/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 17:15:44 by joaog             #+#    #+#             */
/*   Updated: 2026/06/03 17:17:24 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

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