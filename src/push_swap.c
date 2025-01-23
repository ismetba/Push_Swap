/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:58:48 by ibayandu          #+#    #+#             */
/*   Updated: 2025/01/23 21:21:46 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;
	t_list		*stack_a;
	t_list		*stack_b;
	int			has_error;

	if (argc < 2)
		return (0);
	stacks = init_stacks(argv + 1, argc);
	if (!stacks)
	{
		return (invalid_args());
	}
	has_error = check_validate(stacks);
	if (has_error)
		return (has_error);
	merge_algorithm(stacks);
	stack_a = stacks->stack_a;
	stack_b = stacks->stack_b;
	// ft_printf("----------Stack A---------- \n");
	// while (stacks->stack_a)
	// {
	// 	ft_printf("%d\n", *(int *)(stacks->stack_a->content));
	// 	stacks->stack_a = stacks->stack_a->next;
	// }
	// ft_printf("----------Stack B---------- \n");
	// while (stacks->stack_b)
	// {
	// 	ft_printf("%d\n", *(int *)(stacks->stack_b->content));
	// 	stacks->stack_b = stacks->stack_b->next;
	// }
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	free(stacks);
	return (0);
}
