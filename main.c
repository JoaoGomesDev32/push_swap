/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 13:48:32 by fminks-g          #+#    #+#             */
/*   Updated: 2026/06/07 12:36:17 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	s;

	if (argc < 2)
		return (0);
	s.b = NULL;
	s.a = parse_args(argc, argv);
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
	sort_simple(&s);
	free_stack(&s.a);
	return (0);
}
