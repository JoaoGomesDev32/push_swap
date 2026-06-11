/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminks-g <fminks-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 12:49:53 by fminks-g          #+#    #+#             */
/*   Updated: 2026/06/11 16:50:44 by fminks-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_index(t_node *stack)
{
	while (stack)
	{
		stack->index = -1;
		stack = stack->next;
	}
}

static t_node	*find_min_unindexed(t_node *stack)
{
	t_node	*min;

	min = NULL;
	while (stack)
	{
		if (stack->index == -1
			&& (!min || stack->value < min->value))
			min = stack;
		stack = stack->next;
	}
	return (min);
}

	void	assign_indexes(t_node *stack)
	{
		t_node	*min;
		int		index;
		int		size;

		init_index(stack);
		index = 0;
		size = stack_size(stack);
		while (index < size)
		{
			min = find_min_unindexed(stack);
			if (min)
				min->index = index;
			index++;
		}
	}

/*#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_node	*stack;
	t_node	*tmp;

	stack = parse_args(argc, argv);
	if (!stack)
	{
		printf("Error\n");
		return (1);
	}
	tmp = stack;
	while (tmp)
	{
		printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	free_stack(&stack);
	return (0);
}
*/