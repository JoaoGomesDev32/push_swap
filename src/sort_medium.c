/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:38:35 by joagomes          #+#    #+#             */
/*   Updated: 2026/06/09 12:50:05 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	normilize(t_node *stack, int size)
{
	t_node	*current;
	t_node	*runner;
	int		*ranks;
	int		i;
	int		rank;

	size = stack_size(stack);
	ranks = malloc(sizeof(int) * size);
	if (!ranks)
		return ;
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
	i = 0;
	current = stack;
	while (current)
	{
		current->value = ranks[i++];
		current = current->next;
	}
	free(ranks);
}
