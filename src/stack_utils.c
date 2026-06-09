/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminks-g <fminks-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 09:20:18 by joaog             #+#    #+#             */
/*   Updated: 2026/06/09 13:03:50 by fminks-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void	push_top(t_node **stack, int value)
{
	t_node	*node;

	node = new_node(value);
	if (!node)
		return ;
	node->next = *stack;
	*stack = node;
}

int	pop_top(t_node **stack)
{
	t_node	*tmp;
	int		value;

	if (!*stack)
		return (0);
	tmp = *stack;
	value = tmp->value;
	*stack = tmp->next;
	free(tmp);
	return (value);
}

void	free_stack(t_node **stack)
{
	while (*stack)
		pop_top(stack);
}

void	push_bottom(t_node **stack, int value)
{
	t_node	*node;
	t_node	*current;

	node = new_node(value);
	if (!node)
		return ;
	if (!*stack)
	{
		*stack = node;
		return ;
	}
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = node;
}
