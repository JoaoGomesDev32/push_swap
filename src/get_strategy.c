/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_strategy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 19:34:34 by joagomes          #+#    #+#             */
/*   Updated: 2026/06/12 15:13:29 by joaog            ###   ########.fr       */
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
	s->used_strategy = strategy;
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

int	parse_flags(int argc, char **argv, t_stacks *s, int *strategy)
{
	int	i;

	i = 1;
	*strategy = 0;
	while (i < argc && ft_strncmp(argv[i], "--", 2) == 0)
	{
		if (ft_strncmp(argv[i], "--bench", 8) == 0)
			s->bench = 1;
		else
		{
			*strategy = get_strategy(argv[i]);
			if (*strategy == -1)
				return (-1);
		}
		i++;
	}
	return (i);
}
