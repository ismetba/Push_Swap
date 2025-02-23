/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_messages.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 18:54:08 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/23 22:03:26 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	invalid_args(void)
{
	ft_putendl_fd("Error", 2);
	return (1);
}

int	duplicated_number(void)
{
	ft_putendl_fd("Error", 2);
	return (2);
}
