/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:38:35 by joagomes          #+#    #+#             */
/*   Updated: 2026/06/09 15:00:37 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"
#include <math.h>

static void calc_ranks(t_node *stack, int *ranks)
{
	t_node	*current;
	t_node	*runner;
	int		*ranks;
	int		i;
	int		rank;

	i = 0;
	current = stack;
	while (current)
	{
		rank = 0;
		runner = stack;
		while (runner)
		{
			if (runner->value < current->value)
				rank++;
			runner = runner->next;
		}
		ranks[i++] = rank;
		current = current->next;
	}
}

static void	apply_ranks(t_node *stack, int *ranks)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack->value = ranks[i++];
		stack = stack->next;
	}
}

void	normalize(t_node *stack)
{
	int	*ranks;
	int	size;

	size = stack_size(stack);
	ranks = malloc(sizeof(int) * size);
	if (!ranks)
		return ;
	calc_ranks(stack, ranks);
	apply_ranks(stack, ranks);
	free(ranks);
}

static void	chunk_to_b(t_stacks *s, int min, int max)
{
	int	size;
	int	i;

	size = s->size_a;
	i = 0;
	while (i < size)
	{
		if(peek_top(s->a) >= min && peek_top(s->a) <= max)
			op_pb(s);
		else
			op_ra(s);
		i++;
	}
}

void	sort_medium(t_stacks *s)
{
	int	n;
	int	chunk_size;
	int	i;

	n = stack_size(s->a);
	s->size_a = n;
	s->size_a = 0;
	normalize(s->a);
	chunk_size = n / ft_sqrt(n);
	i = 0;
	while (i < n)
	{
		chunk_to_b(s, i, i + chunk_size - 1);
		i += chunk_size;
	}
	while (s->b)
		op_pb(s);
}