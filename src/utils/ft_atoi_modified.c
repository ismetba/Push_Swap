/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_modified.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibayandu <ibayandu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 20:23:06 by ibayandu          #+#    #+#             */
/*   Updated: 2025/02/25 21:34:45 by ibayandu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	ft_skip_whitespace_and_sign(const char *str, int *i, int *sign)
{
	while (str[*i] == ' ' || str[*i] == '\t' || str[*i] == '\n'
		|| str[*i] == '\v' || str[*i] == '\f' || str[*i] == '\r')
		(*i)++;
	if (str[*i] == '-' && ft_strlen(str) > 1)
	{
		*sign = -1;
		(*i)++;
	}
	else if (str[*i] == '+' && ft_strlen(str) > 1)
		(*i)++;
	return (*i);
}

int	*ft_atoi_modified(const char *str)
{
	long	result;
	int		sign;
	int		i;
	int		*ptr;

	result = 0;
	sign = 1;
	i = 0;
	if (str == NULL)
		return (NULL);
	ft_skip_whitespace_and_sign(str, &i, &sign);
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	if (str[i] != '\0')
		return (NULL);
	ptr = (int *)malloc(sizeof(int));
	if (ptr == NULL)
		return (NULL);
	*ptr = (int)(sign * result);
	if (result * sign < -2147483648 || result * sign > 2147483647)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
