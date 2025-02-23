/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_instructions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:04:04 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/23 22:04:13 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ra_lst_op(t_stacks *stacks)
{
	t_list	*dummy_node;

	dummy_node = stacks->stack_a;
	stacks->stack_a = stacks->stack_a->next;
	dummy_node->next = NULL;
	ft_lstadd_back(&stacks->stack_a, dummy_node);
}

static void	rb_lst_op(t_stacks *stacks)
{
	t_list	*dummy_node;

	dummy_node = stacks->stack_b;
	stacks->stack_b = stacks->stack_b->next;
	dummy_node->next = NULL;
	ft_lstadd_back(&stacks->stack_b, dummy_node);
}

void	ra(t_stacks *stacks)
{
	ra_lst_op(stacks);
	ft_putendl_fd("ra", 1);
}

void	rb(t_stacks *stacks)
{
	rb_lst_op(stacks);
	ft_putendl_fd("rb", 1);
}

void	rr(t_stacks *stacks)
{
	rb_lst_op(stacks);
	ra_lst_op(stacks);
	ft_putendl_fd("rr", 1);
}
