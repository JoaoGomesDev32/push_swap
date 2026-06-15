/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fminks-g <fminks-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/05 10:59:25 by fminks-g          #+#    #+#             */
/*   Updated: 2026/06/09 10:06:38 by fminks-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	parse_string(t_node **stack, char *arg)
{
	char	**nums;
	int		i;

	nums = ft_split(arg, ' ');
	if (!nums)
		return (0);
	i = 0;
	while (nums[i])
	{
		if (!is_valid_number(nums[i]))
			return (free_split(nums), 0);
		push_bottom(stack, ft_atoi(nums[i]));
		i++;
	}
	free_split(nums);
	return (1);
}

t_node	*parse_args(int argc, char **argv)
{
	t_node	*stack;
	int		i;

	stack = NULL;
	i = 1;
	while (i < argc)
	{
		if (!parse_string(&stack, argv[i]))
		{
			free_stack(&stack);
			return (NULL);
		}
		i++;
	}
	return (stack);
}
