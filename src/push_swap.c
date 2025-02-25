/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:58:48 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/25 21:33:24 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	handle_3_size(t_stacks *stacks)
{
	int	first;
	int	second;
	int	third;

	first = *(int *)stacks->stack_a->content;
	second = *(int *)stacks->stack_a->next->content;
	third = *(int *)stacks->stack_a->next->next->content;
	if (first < second && second > third && first < third)
	{
		rra(stacks);
		sa(stacks);
	}
	else if (first > second && second < third && first < third)
		sa(stacks);
	else if (first < second && second > third && first > third)
		rra(stacks);
	else if (first > second && second < third && first > third)
		ra(stacks);
	else if (first > second && second > third && first > third)
	{
		ra(stacks);
		sa(stacks);
	}
}

void	handle_small_size(t_stacks *stacks)
{
	if (ft_lstsize(stacks->stack_a) == 2)
	{
		sa(stacks);
	}
	else
		handle_3_size(stacks);
}

void	handle_5_size(t_stacks *stacks)
{
	pb(stacks);
	pb(stacks);
	handle_3_size(stacks);
	if (*(int *)stacks->stack_b->content
		< *(int *)stacks->stack_b->next->content)
		rb(stacks);
	sort_to_a(stacks, 3, 2);
}

int	free_stacks(t_stacks *stacks, int has_b)
{
	if (has_b)
	{
		ft_lstclear(&stacks->stack_a, free);
		free(stacks);
		return (0);
	}
	ft_lstclear(&stacks->stack_a, free);
	ft_lstclear(&stacks->stack_b, free);
	free(stacks);
	return (0);
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;
	int			has_error;

	if (argc < 2)
		return (0);
	stacks = init_stacks(argv + 1, argc);
	if (!stacks)
		return (invalid_args());
	has_error = check_validate(stacks);
	if (has_error)
		return (has_error);
	if (check_is_sorted(stacks->stack_a))
		return (free_stacks(stacks, 1));
	if (ft_lstsize(stacks->stack_a) <= 3)
		handle_small_size(stacks);
	else if (ft_lstsize(stacks->stack_a) == 5)
		handle_5_size(stacks);
	else
		merge_algorithm(stacks);
	return (free_stacks(stacks, 0));
}
