/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 13:48:32 by fminks-g          #+#    #+#             */
/*   Updated: 2026/06/09 15:20:09 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	s;

	if (argc < 2)
		return (0);
	s.a = parse_args(argc, argv);
	s.b = NULL;
	if (!s.a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (has_duplicates(s.a))
	{
		free_stack(&s.a);
		write(2, "Error\n", 6);
		return (1);
	}
	if (is_sorted(s.a))
	{
		free_stack(&s.a);
		return (0);
	}
	// sort_simple(&s);
	// sort_medium(&s);
	assign_indexes(s.a);
	radix_sort(&s);
	free_stack(&s.b);
	return (0);
}
