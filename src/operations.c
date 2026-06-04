/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 11:35:05 by joaog             #+#    #+#             */
/*   Updated: 2026/06/04 12:04:40 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	op_sa(t_stacks *s)
{
	int	first;
	int	second;

	if (!s)
		return ;
	first = pop_top(&s->a);
	second = pop_top(&s->a);
	push_top(&s->a, first);
	push_top(&s->a, second);
	write(1, "sa\n", 3);
}

void	op_sb(t_stacks *s)
{
	int	first;
	int	second;

	if (!s)
		return ;
	first = pop_top(&s->b);
	second = pop_top(&s->b);
	push_top(&s->b, first);
	push_top(&s->b, second);
	write(1, "sb\n", 3);
}


