/* ************************************************************************** */
/*                                                                            */
/*   ft_string_format.c                                      :::      ::::::: */
/*                                                         :+:      :+:    :+ */
/*                                                       +:+ +:+         +:+  */
/*   By: ibayandu <ibayandu@student.42istanbul.com.tr> +#+  +:+       +#+     */
/*                                                  +#+#+#+#+#+   +#+         */
/*   Created: 2024/11/03 21:57:03 by ibayandu             #+#    #+#          */
/*   Updated: 2024/11/09 17:27:49 by ibayandu            ###   ########.tr    */
/*                                                                            */
/*                                 ▗▄▄▄▖▗▄▄▖  ▗▄▖▗▖  ▗▖▗▄▖ ▗▖  ▗▖▗▄▄▄ ▗▖ ▗▖   */
/*                                   █  ▐▌ ▐▌▐▌ ▐▌▝▚▞▘▐▌ ▐▌▐▛▚▖▐▌▐▌  █▐▌ ▐▌   */
/*                                   █  ▐▛▀▚▖▐▛▀▜▌ ▐▌ ▐▛▀▜▌▐▌ ▝▜▌▐▌  █▐▌ ▐▌   */
/*                                 ▗▄█▄▖▐▙▄▞▘▐▌ ▐▌ ▐▌ ▐▌ ▐▌▐▌  ▐▌▐▙▄▄▀▝▚▄▞▘   */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_string_format(va_list args, int *total_length, int space, int x)
{
	char	*string_ptr;
	int		strlen;

	*total_length = *total_length - (x);
	string_ptr = va_arg(args, char *);
	if (string_ptr == NULL)
	{
		ft_putstr("(null)", total_length);
		return ;
	}
	strlen = ft_strlen(string_ptr);
	space = 01;
	while (x > strlen && x > 0)
	{
		x = x - 1;
		ft_putchar(' ', total_length);
	}
	if (string_ptr != NULL)
		ft_putstr(string_ptr, total_length);
	while (-x > strlen && x < 0)
	{
		x++;
		ft_putchar(' ', total_length);
	}
}
