/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joagomes <joagomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 22:05:39 by joaog             #+#    #+#             */
/*   Updated: 2026/06/11 19:36:15 by joagomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

/* Structs */
typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef struct s_stacks
{
	t_node	*a;
	t_node	*b;
	int		size_a;
	int		size_b;
}	t_stacks;

/* Stack utils */
t_node	*new_node(int value);
void	push_top(t_node **stack, int value);
void	push_bottom(t_node **stack, int value);
void	push_node(t_node **dest, t_node **src);
int		pop_top(t_node **stack);
void	free_stack(t_node **stack);
int		peek_top(t_node *stack);
int		stack_size(t_node *stack);
int		ft_sqrt(int n);

/* Parsing */
t_node	*parse_args(int argc, char **argv);

/* Validation */
int		is_sorted(t_node *stack);
int		has_duplicates(t_node *stack);
int		is_valid_number(char *str);
float	compute_disorder(t_node *stack);
int		is_int_range(char *str);

/* Operations */
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

void	assign_indexes(t_node *stack);
void	sort_simple(t_stacks *s);
void	radix_sort(t_stacks *s);
void	normalize(t_node *stack);
void	sort_medium(t_stacks *s);
void	sort_adaptive(t_stacks *s);
int		find_max_pos(t_node *stack);
void	bring_max_to_top(t_stacks *s);

int		error_exit(t_stacks *s);
void	run_strategy(t_stacks *s, int strategy);
int		get_strategy(char *arg);

#endif