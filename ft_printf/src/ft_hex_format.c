/* ************************************************************************** */
/*                                                                            */
/*   ft_hex_format.c                                         :::      ::::::: */
/*                                                         :+:      :+:    :+ */
/*                                                       +:+ +:+         +:+  */
/*   By: ibayandu <ibayandu@student.42istanbul.com.tr> +#+  +:+       +#+     */
/*                                                  +#+#+#+#+#+   +#+         */
/*   Created: 2024/11/03 21:54:59 by ibayandu             #+#    #+#          */
/*   Updated: 2024/11/03 22:07:48 by ibayandu            ###   ########.tr    */
/*                                                                            */
/*                                 ▗▄▄▄▖▗▄▄▖  ▗▄▖▗▖  ▗▖▗▄▖ ▗▖  ▗▖▗▄▄▄ ▗▖ ▗▖   */
/*                                   █  ▐▌ ▐▌▐▌ ▐▌▝▚▞▘▐▌ ▐▌▐▛▚▖▐▌▐▌  █▐▌ ▐▌   */
/*                                   █  ▐▛▀▚▖▐▛▀▜▌ ▐▌ ▐▛▀▜▌▐▌ ▝▜▌▐▌  █▐▌ ▐▌   */
/*                                 ▗▄█▄▖▐▙▄▞▘▐▌ ▐▌ ▐▌ ▐▌ ▐▌▐▌  ▐▌▐▙▄▄▀▝▚▄▞▘   */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_hex_format(char c, int *total_length, unsigned int u_converted)
{
	if (c == 'x')
		ft_putunbr_base(u_converted, "0123456789abcdef", total_length);
	else
		ft_putunbr_base(u_converted, "0123456789ABCDEF", total_length);
}
