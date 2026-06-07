/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminks-g <fminks-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/06 13:48:32 by fminks-g          #+#    #+#             */
/*   Updated: 2026/06/06 13:48:47 by fminks-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_node	*stack;

	stack = parse_args(argc, argv);
	if (!stack)
	{
		printf("Error\n");
		return (1);
	}
	printf("Parsing OK\n");
	free_stack(&stack);
	return (0);
}
