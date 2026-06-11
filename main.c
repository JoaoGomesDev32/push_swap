/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 13:48:32 by fminks-g          #+#    #+#             */
/*   Updated: 2026/06/11 19:34:12 by joagomes         ###   ########.fr       */
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
	int			has_flag;

	if (argc < 2)
		return (0);
	has_flag = (ft_strncmp(argv[1], "--", 2) == 0);
	strategy = get_strategy(argv[1]);
	if (has_flag && strategy == -1)
		return (write(2, "Error\n", 6), 1);
	if (has_flag && argc < 3)
		return (0);
	s.a = parse_args(argc - has_flag, argv + has_flag);
	s.b = NULL;
	if (validate(&s))
		return (1);
	if (is_sorted(s.a))
		return (free_stack(&s.a), 0);
	s.size_a = stack_size(s.a);
	s.size_b = 0;
	run_strategy(&s, strategy);
	free_stack(&s.a);
	free_stack(&s.b);
	return (0);
}
