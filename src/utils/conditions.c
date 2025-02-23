/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:15:55 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/23 22:51:41 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	loop_condition(int i, int j, t_stacks *stacks)
{
	return (multiple_of_next_i(i, stacks->size_of_org_lst) >= i * j
		&& !(ft_lstsize(stacks->stack_a) == i && ft_lstsize(stacks->stack_b) < i
			/ 2));
}

int	a_move_right_calc(int i, t_stacks *stacks)
{
	int	result;

	if (multiple_of_previous_i(i, stacks->size_of_org_lst)
		+ ft_lstsize(stacks->stack_b) == stacks->size_of_org_lst
		&& ft_lstsize(stacks->stack_b) < i / 2)
	{
		result = 0;
	}
	else
	{
		result = i / 2;
	}
	return (result);
}

int	b_move_right_calc(int i, t_stacks *stacks)
{
	int	result;

	if (ft_lstsize(stacks->stack_b) < i / 2)
	{
		result = ft_lstsize(stacks->stack_b);
	}
	else
	{
		result = i / 2;
	}
	return (result);
}

int	move_to_b_condition(int i, t_stacks *stacks)
{
	int	condition_met;

	if (multiple_of_next_i(i, stacks->size_of_org_lst) >= i)
	{
		if (!(ft_lstsize(stacks->stack_a) == i / 2
				&& ft_lstsize(stacks->stack_b) < i / 2))
		{
			condition_met = 1;
		}
		else
		{
			condition_met = 0;
		}
	}
	else
	{
		condition_met = 0;
	}
	return (condition_met);
}
