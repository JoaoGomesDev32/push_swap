/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:22:34 by joaog             #+#    #+#             */
/*   Updated: 2026/06/12 18:24:05 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	print_percent(float value)
{
	int	whole;
	int	decimal;

	value = value * 100;
	whole = (int)value;
	decimal = (int)((value - whole) * 100);
	if (decimal < 0)
		decimal = -decimal;
	ft_putnbr_fd(whole, 2);
	ft_putstr_fd(".", 2);
	if (decimal < 10)
		ft_putstr_fd("0", 2);
	ft_putnbr_fd(decimal, 2);
}

static void	print_strategy(int used_strategy)
{
	if (used_strategy == 1)
		ft_putstr_fd("Simple / O(n^2)\n", 2);
	else if (used_strategy == 2)
		ft_putstr_fd("Medium / O(n*sqrt(n))\n", 2);
	else
		ft_putstr_fd("Complex / O(n*log(n))\n", 2);
}

static int	total_ops(t_stacks *s)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < 11)
	{
		total += s->ops[i];
		i++;
	}
	return (total);
}

void	print_bench(t_stacks *s, float disorder)
{
	ft_putstr_fd("[bench] disorder: ", 2);
	print_percent(disorder);
	ft_putstr_fd("%\n", 2);
	ft_putstr_fd("[bench] strategy: ", 2);
	print_strategy(s->used_strategy);
	ft_putstr_fd("[bench] total_ops: ", 2);
	ft_putnbr_fd(total_ops(s), 2);
	ft_putstr_fd("\n", 2);
	print_ops_line1(s);
	print_ops_line2(s);
}
