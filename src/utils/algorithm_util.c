/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:11:10 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/23 22:11:19 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	next_to_power_of_two(int size)
{
	int	result;

	result = 2;
	while (result <= size)
		result *= 2;
	return (result);
}

int	multiple_of_previous_i(int i, int size)
{
	while (size % i != 0)
		size--;
	return (size);
}

int	multiple_of_next_i(int i, int size)
{
	int	result;

	result = i;
	while (result < size)
		result += i;
	return (result);
}
