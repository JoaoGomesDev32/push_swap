/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 13:04:04 by joaog             #+#    #+#             */
/*   Updated: 2026/06/04 13:19:04 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	op_pa(t_stacks *s)
{
	if (!s || !s->b)
		return ;
	push_top(&s->a, pop_top(&s->b));
	write(1, "pa\n", 3);
}

void	op_pb(t_stacks *s)
{
	if (!s || !s->a)
		return ;
	push_top(&s->b, pop_top(&s->a));
	write(1, "pb\n", 3);
}
