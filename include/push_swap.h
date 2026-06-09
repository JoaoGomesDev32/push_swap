/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 22:05:39 by joaog             #+#    #+#             */
/*   Updated: 2026/06/09 14:59:49 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

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
t_node	*parse_args(int argc, char **argv);
int		is_sorted(t_node *stack);
int		has_duplicates(t_node *stack);
int		is_valid_number(char *str);
float	compute_disorder(t_node *stack);
int		ft_sqrt(int n);

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
void	push_bottom(t_node **stack, int value);
void	normalize(t_node *stack);
void	sort_simple(t_stacks *s);
void	sort_medium(t_stacks *s);

#endif