/* ************************************************************************** */
/*                                                                            */
/*   ft_putunbr_base.c                                       :::      ::::::: */
/*                                                         :+:      :+:    :+ */
/*                                                       +:+ +:+         +:+  */
/*   By: ibayandu <ibayandu@student.42istanbul.com.tr> +#+  +:+       +#+     */
/*                                                  +#+#+#+#+#+   +#+         */
/*   Created: 2024/11/03 21:56:54 by ibayandu             #+#    #+#          */
/*   Updated: 2024/11/03 22:07:25 by ibayandu            ###   ########.tr    */
/*                                                                            */
/*                                 ▗▄▄▄▖▗▄▄▖  ▗▄▖▗▖  ▗▖▗▄▖ ▗▖  ▗▖▗▄▄▄ ▗▖ ▗▖   */
/*                                   █  ▐▌ ▐▌▐▌ ▐▌▝▚▞▘▐▌ ▐▌▐▛▚▖▐▌▐▌  █▐▌ ▐▌   */
/*                                   █  ▐▛▀▚▖▐▛▀▜▌ ▐▌ ▐▛▀▜▌▐▌ ▝▜▌▐▌  █▐▌ ▐▌   */
/*                                 ▗▄█▄▖▐▙▄▞▘▐▌ ▐▌ ▐▌ ▐▌ ▐▌▐▌  ▐▌▐▙▄▄▀▝▚▄▞▘   */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_putunbr_base(unsigned int nbr, char *base, int *total_length)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (ft_check_base(base))
	{
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]], total_length);
	}
}
