/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:00:45 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/25 22:06:39 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	*free_handling(t_stacks *stacks)
{
	ft_lstclear(&stacks->stack_a, free);
	free(stacks);
	return (NULL);
}

t_stacks	*init_stacks(char **argv, int argc)
{
	int			*value;
	t_stacks	*stacks;

	if (**argv == '\0')
		return (0);
	stacks = (t_stacks *)malloc(sizeof(t_stacks));
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	if (!stacks)
		return (NULL);
	while (argc-- > 1)
	{
		value = ft_atoi_modified(*argv);
		if (!value)
		{
			return (free_handling(stacks));
		}
		ft_lstadd_back(&stacks->stack_a, ft_lstnew(value));
		argv++;
	}
	stacks->size_of_org_lst = ft_lstsize(stacks->stack_a);
	return (stacks);
}
