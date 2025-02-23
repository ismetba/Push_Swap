/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:52:40 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/23 22:25:08 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/includes/ft_printf.h"

typedef struct s_stacks
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size_of_org_lst;
	int		move_count;
}			t_stacks;

void		sort_to_a(t_stacks *stacks, int a_move_right, int b_move_right);

t_stacks	*init_stacks(char **argv, int argc);

void		merge_algorithm(t_stacks *stacks);

// Utils
int			*ft_atoi_modified(const char *str);
int			next_to_power_of_two(int size);
int			multiple_of_previous_i(int i, int size);
int			multiple_of_next_i(int i, int size);
// Utils Conditions
int			loop_condition(int i, int j, t_stacks *stacks);
int			move_to_b_condition(int i, t_stacks *stacks);
int			a_move_right_calc(int i, t_stacks *stacks);
int			b_move_right_calc(int i, t_stacks *stacks);

// Error messages
int			invalid_args(void);
int			duplicated_number(void);
int			sorted_already(void);
int			check_duplicate(t_list *list);
int			check_is_sorted(t_list *stacks);
int			check_validate(t_stacks *stacks);

// Instructions
void		sa(t_stacks *stacks);
void		sb(t_stacks *stacks);
void		ss(t_stacks *stacks);
void		pa(t_stacks *stacks);
void		pb(t_stacks *stacks);
void		pp(t_stacks *stacks);
void		ra(t_stacks *stacks);
void		rb(t_stacks *stacks);
void		rr(t_stacks *stacks);
void		rra(t_stacks *stacks);
void		rrb(t_stacks *stacks);
void		rrr(t_stacks *stacks);

#endif