/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 17:52:40 by ibayandu          #+#    #+#             */
/*   Updated: 2025/01/05 21:15:05 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/includes/ft_printf.h"

typedef struct s_stacks
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		max_value;
	int		min_value;
	int		value_count;
}			t_stacks;

t_stacks	*init_stacks(char **argv, int argc);

int			*ft_atoi_modified(const char *str);

// error messages
int			invalid_args(void);
int			duplicated_number(void);
int			check_duplicate(t_list *list);
int			check_validate(t_list *list);

#endif