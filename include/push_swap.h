/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 22:05:39 by joaog             #+#    #+#             */
/*   Updated: 2026/06/02 22:08:00 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Um nó da linked list */
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}	t_node;

/* As duas stacks juntas */
typedef struct s_stacks
{
	t_node	*a;
	t_node	*b;
	int		size_a;
	int		size_b;
}	t_stacks;