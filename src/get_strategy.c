/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_strategy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 19:34:34 by joagomes          #+#    #+#             */
/*   Updated: 2026/06/11 19:35:11 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	error_exit(t_stacks *s)
{
	free_stack(&s->a);
	write(2, "Error\n", 6);
	return (1);
}

void	run_strategy(t_stacks *s, int strategy)
{
	if (strategy == 1)
		sort_simple(s);
	else if (strategy == 2)
		sort_medium(s);
	else if (strategy == 3)
	{
		assign_indexes(s->a);
		radix_sort(s);
	}
	else
		sort_adaptive(s);
}

int	get_strategy(char *arg)
{
	if (!arg || ft_strncmp(arg, "--", 2) != 0)
		return (0);
	if (ft_strncmp(arg, "--simple", 9) == 0)
		return (1);
	if (ft_strncmp(arg, "--medium", 9) == 0)
		return (2);
	if (ft_strncmp(arg, "--complex", 10) == 0)
		return (3);
	if (ft_strncmp(arg, "--adaptive", 11) == 0)
		return (4);
	return (-1);
}
