/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 18:18:16 by joaog             #+#    #+#             */
/*   Updated: 2026/06/12 18:19:51 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	print_op(char *name, int value)
{
	ft_putstr_fd(name, 2);
	ft_putnbr_fd(value, 2);
	ft_putstr_fd(" ", 2);
}

void	print_ops_line1(t_stacks *s)
{
	ft_putstr_fd("[bench] ", 2);
	print_op("sa: ", s->ops[0]);
	print_op("sb: ", s->ops[1]);
	print_op("ss: ", s->ops[2]);
	print_op("pa: ", s->ops[3]);
	print_op("pb: ", s->ops[4]);
	ft_putstr_fd("\n", 2);
}

void	print_ops_line2(t_stacks *s)
{
	ft_putstr_fd("[bench] ", 2);
	print_op("ra: ", s->ops[5]);
	print_op("rb: ", s->ops[6]);
	print_op("rr: ", s->ops[7]);
	print_op("rra: ", s->ops[8]);
	print_op("rrb: ", s->ops[9]);
	print_op("rrr: ", s->ops[10]);
	ft_putstr_fd("\n", 2);
}
