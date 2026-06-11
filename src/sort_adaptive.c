/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_adaptive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 16:37:31 by joagomes          #+#    #+#             */
/*   Updated: 2026/06/11 16:58:36 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_adaptive(t_stacks *s)
{
	float	disorder;

	disorder = compute_disorder(s->a);
	if (disorder < 0.2)
		sort_simple(s);
	else if (disorder < 0.5)
		sort_medium(s);
	else
	{
		assign_indexes(s->a);
		radix_sort(s);
	}
}
