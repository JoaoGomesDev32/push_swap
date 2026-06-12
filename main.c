/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 13:48:32 by fminks-g          #+#    #+#             */
/*   Updated: 2026/06/12 14:56:23 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	validate(t_stacks *s)
{
	if (!s->a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (has_duplicates(s->a))
		return (error_exit(s));
	return (0);
}

int	main(int argc, char **argv)
{
	t_stacks	s;
	int			strategy;
	int			start;

	if (argc < 2)
		return (0);
	ft_bzero(&s, sizeof(t_stacks));
	start = parse_flags(argc, argv, &s, &strategy);
	if (start == -1)
		return (write(2, "Error\n", 6), 1);
	if (start >= argc)
		return (0);
	s.a = parse_args(argc - start + 1, argv + start - 1);
	if (validate(&s))
		return (1);
	if (is_sorted(s.a))
		return (free_stack(&s.a), 0);
	s.size_a = stack_size(s.a);
	run_strategy(&s, strategy);
	free_stack(&s.a);
	free_stack(&s.b);
	return (0);
}
