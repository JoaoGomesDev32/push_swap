/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_adaptive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:37:31 by joagomes          #+#    #+#             */
/*   Updated: 2026/06/11 18:19:26 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_adaptive(t_stacks *s)
{
	float	disorder;
	int		n;

	n = stack_size(s->a);
	disorder = compute_disorder(s->a);
	if (n <= 5)
		sort_simple(s);
	else if (disorder < 0.2f)
		sort_simple(s);
	else if (disorder < 0.5f && n <= 100)
		sort_medium(s);
	else
	{
		assign_indexes(s->a);
		radix_sort(s);
	}
}
