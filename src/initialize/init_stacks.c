/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:00:45 by ibayandu          #+#    #+#             */
/*   Updated: 2025/01/09 22:33:34 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void free_arg_list(char **arg_list)
{
	int i = 0;
	while (arg_list[i])
		free(arg_list[i++]);
	free(arg_list);
}

void *free_handling(t_stacks *stacks, char **arg_list)
{
	ft_lstclear(&stacks->stack_a, free);
	free(stacks);
	free_arg_list(arg_list);
	return NULL;
}


t_stacks *init_stacks(char **argv, int argc)
{
	char **arg_list;
	char **arg_list_addr;
	int *value;
	t_stacks *stacks;

	stacks = (t_stacks *)malloc(sizeof(t_stacks));
	if (!stacks)
		return (NULL);
	arg_list = ft_split(*(argv), ' ');
	arg_list_addr = arg_list;
	while (*arg_list)
	{
		value = ft_atoi_modified(*arg_list++);
		if (!value)
		{
			return (free_handling(stacks, arg_list_addr));
		}
		ft_lstadd_front(&stacks->stack_a, ft_lstnew(value));
	}
	free_arg_list(arg_list_addr);
	stacks->size_of_org_lst = ft_lstsize(stacks->stack_a);
	return (stacks);
}
