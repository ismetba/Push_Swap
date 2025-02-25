/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_algorithm.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:05:01 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/25 21:54:45 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	move_to_b(t_stacks *stacks, int i)
{
	int	size;

	size = stacks->size_of_org_lst - multiple_of_next_i(i / 2,
			stacks->size_of_org_lst / 2);
	if (multiple_of_next_i(i / 2, stacks->size_of_org_lst / 2) - size > i / 2)
	{
		size = size + (i / 2);
	}
	while (size--)
		pb(stacks);
}

static void	sort_by_two(t_stacks *stacks, int size)
{
	if (ft_lstsize(stacks->stack_a) > ft_lstsize(stacks->stack_b))
		size++;
	while (size--)
	{
		if ((*(int *)stacks->stack_a->content)
			< (*(int *)stacks->stack_a->next->content)
			&& *(int *)stacks->stack_b->content
			> *(int *)stacks->stack_b->next->content)
			;
		else if (*(int *)stacks->stack_a->content
			> *(int *)stacks->stack_a->next->content
			&& *(int *)stacks->stack_b->content
			< *(int *)stacks->stack_b->next->content)
			ss(stacks);
		else if (*(int *)stacks->stack_a->content
			> *(int *)stacks->stack_a->next->content)
			sa(stacks);
		else if (*(int *)stacks->stack_b->content
			< *(int *)stacks->stack_b->next->content)
			sb(stacks);
		if (ft_lstsize(stacks->stack_a) > 2)
			(rr(stacks), rr(stacks));
	}
	if (ft_lstsize(stacks->stack_a) > 2 && ft_lstsize(stacks->stack_b) % 2)
		rb(stacks);
}

void	sort_to_a(t_stacks *stacks, int a_move_right, int b_move_right)
{
	int	total_move_right;

	total_move_right = a_move_right + b_move_right;
	while (total_move_right--)
	{
		if (!b_move_right || (a_move_right
				&& *(int *)ft_lstlast(stacks->stack_a)->content
				> *(int *)stacks->stack_b->content))
		{
			rra(stacks);
			a_move_right--;
		}
		else
		{
			pa(stacks);
			b_move_right--;
		}
	}
}

void	merge_algorithm(t_stacks *stacks)
{
	int	i;
	int	j;

	i = 4;
	move_to_b(stacks, i);
	sort_by_two(stacks, stacks->size_of_org_lst / 4);
	while (multiple_of_next_i(i, stacks->size_of_org_lst) > i)
	{
		j = 1;
		while (loop_condition(i, j, stacks))
		{
			sort_to_a(stacks, a_move_right_calc(i, stacks),
				b_move_right_calc(i, stacks));
			j++;
		}
		i *= 2;
		if (move_to_b_condition(i, stacks))
			move_to_b(stacks, i);
	}
	sort_to_a(stacks, i / 2, b_move_right_calc(i, stacks));
}
