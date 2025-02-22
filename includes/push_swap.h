/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:52:40 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/16 21:08:52 by ibayandu         ###   ########.fr       */
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

t_stacks	*init_stacks(char **argv, int argc);

int			*ft_atoi_modified(const char *str);

void		merge_algorithm(t_stacks *stacks);

// error messages
int			invalid_args(void);
int			duplicated_number(void);
int			check_duplicate(t_list *list);
int			check_validate(t_stacks *stacks);

// instructions

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