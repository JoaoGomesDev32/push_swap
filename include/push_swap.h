/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joaog <joaog@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 22:05:39 by joaog             #+#    #+#             */
/*   Updated: 2026/06/04 14:29:01 by joaog            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

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

t_node	*new_node(int value);
void	push_top(t_node **stack, int value);
int		pop_top(t_node **stack);
void	free_stack(t_node **stack);
int		peek_top(t_node *stack);
int		stack_size(t_node *stack);

void	op_sa(t_stacks *s);
void	op_sb(t_stacks *s);
void	op_ss(t_stacks *s);
void	op_pa(t_stacks *s);
void	op_pb(t_stacks *s);
void	op_ra(t_stacks *s);
void	op_rb(t_stacks *s);
void	op_rr(t_stacks *s);
void	op_rra(t_stacks *s);
void	op_rrb(t_stacks *s);
void	op_rrr(t_stacks *s);

#endif