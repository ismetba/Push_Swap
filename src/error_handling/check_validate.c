/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 19:05:32 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/23 17:49:28 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_validate(t_stacks *stacks)
{
	if (check_duplicate(stacks->stack_a))
	{
		ft_lstclear(&stacks->stack_a, free);
		free(stacks);
		return (duplicated_number());
	}
}
