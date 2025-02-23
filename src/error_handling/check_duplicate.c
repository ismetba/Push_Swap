/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:59:02 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/23 17:21:25 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_duplicate(t_list *list)
{
	t_list	*current;
	t_list	*compare;

	current = list;
	while (current != NULL)
	{
		compare = current->next;
		while (compare != NULL)
		{
			if (*(int *)(current->content) == *(int *)(compare->content))
				return (1);
			compare = compare->next;
		}
		current = current->next;
	}
	return (0);
}
