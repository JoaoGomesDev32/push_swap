/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_adaptive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:37:31 by joagomes          #+#    #+#             */
/*   Updated: 2026/06/12 15:11:15 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_adaptive(t_stacks *s)
{
	float	disorder;
	int		n;

	n = stack_size(s->a);
	disorder = compute_disorder(s->a);
	if (n <= 5 || disorder < 0.2f)
	{
		s->used_strategy = 1;
		sort_simple(s);
	}
	else if (disorder < 0.5f && n <= 100)
	{
		s->used_strategy = 2;
		sort_medium(s);
	}
	else
	{
		s->used_strategy = 3;
		assign_indexes(s->a);
		radix_sort(s);
	}
}
