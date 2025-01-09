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

static int	word_count(char **str_arr)
{
	int	i;

	i = 0;
	while (str_arr[i])
	{
		i++;
	}
	return (i);
}

t_stacks	*init_stacks(char **argv, int argc)
{
	char		**arg_list;
	int			*value;
	t_stacks	*stacks;
	int			i;
	int			words;

	stacks = (t_stacks *)malloc(sizeof(t_stacks));
	if (!stacks)
		return (NULL);
	arg_list = ft_split(*(argv), ' ');
	while (*arg_list)
	{
		value = ft_atoi_modified(*arg_list++);
		if (!value)
		{
			ft_lstclear(&stacks->stack_a, free);
			return (NULL);
		}
		ft_lstadd_front(&stacks->stack_a, ft_lstnew(value));
	}
	i = 0;
	words = word_count(arg_list);
	while (i < words)
	{
		free(arg_list[i]);
		i++;
	}
	free(arg_list);
	return (stacks);
}
