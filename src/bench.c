/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 15:22:34 by joaog             #+#    #+#             */
/*   Updated: 2026/06/12 15:26:38 by joaog            ###   ########.fr       */
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

void	print_bench(t_stacks *s, float disorder)
{
	(void)s;
	ft_putstr_fd("[bench] disorder: ", 2);
	print_percent(disorder);
	ft_putstr_fd("%\n", 2);
}
