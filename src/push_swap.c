/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:58:48 by ibayandu          #+#    #+#             */
/*   Updated: 2025/01/09 22:21:42 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;
	int			has_error;

	if (argc < 2)
		return (0);
	stacks = init_stacks(argv + 1, argc - 1);
	if (!stacks)
		return (invalid_args());
	has_error = check_validate(stacks->stack_a);
	if (has_error)
		return (has_error);
	// while (stacks->stack_a)
	// {
	// 	ft_printf("%d\n", *(int *)(stacks->stack_a->content));
	// 	stacks->stack_a = stacks->stack_a->next;
	// }
	ft_lstclear(&stacks->stack_a, free);
	ft_lstclear(&stacks->stack_b, free);
	free(stacks);
}
