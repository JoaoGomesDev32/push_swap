/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 12:45:23 by fminks-g          #+#    #+#             */
/*   Updated: 2026/06/10 11:45:33 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_max_bits(t_node *stack)
{
	int	max_index;
	int	bits;

	max_index = stack_size(stack) - 1;
	bits = 0;
	while ((max_index >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_stacks *s)
{
	int	size;
	int	max_bits;
	int	i;
	int	j;

	s->size_a = stack_size(s->a);
	s->size_b = 0;
	size = s->size_a;
	max_bits = get_max_bits(s->a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if (((s->a->index >> i) & 1) == 0)
				op_pb(s);
			else
				op_ra(s);
			j++;
		}
		while (s->b)
			op_pa(s);
		i++;
	}
}
