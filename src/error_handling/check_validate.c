/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_validate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 19:05:32 by ibayandu          #+#    #+#             */
/*   Updated: 2025/01/05 20:52:31 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	check_validate(t_list *list)
{
	int	has_error;

	has_error = check_duplicate(list);
	if (has_error)
		return (duplicated_number());
}
