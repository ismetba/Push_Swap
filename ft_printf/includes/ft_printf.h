/* ************************************************************************** */
/*                                                                            */
/*   ft_printf.h                                             :::      ::::::: */
/*                                                         :+:      :+:    :+ */
/*                                                       +:+ +:+         +:+  */
/*   By: ibayandu <ibayandu@student.42istanbul.com.tr> +#+  +:+       +#+     */
/*                                                  +#+#+#+#+#+   +#+         */
/*   Created: 2024/11/03 21:57:19 by ibayandu             #+#    #+#          */
/*   Updated: 2024/11/09 17:40:38 by ibayandu            ###   ########.tr    */
/*                                                                            */
/*                                 ▗▄▄▄▖▗▄▄▖  ▗▄▖▗▖  ▗▖▗▄▖ ▗▖  ▗▖▗▄▄▄ ▗▖ ▗▖   */
/*                                   █  ▐▌ ▐▌▐▌ ▐▌▝▚▞▘▐▌ ▐▌▐▛▚▖▐▌▐▌  █▐▌ ▐▌   */
/*                                   █  ▐▛▀▚▖▐▛▀▜▌ ▐▌ ▐▛▀▜▌▐▌ ▝▜▌▐▌  █▐▌ ▐▌   */
/*                                 ▗▄█▄▖▐▙▄▞▘▐▌ ▐▌ ▐▌ ▐▌ ▐▌▐▌  ▐▌▐▙▄▄▀▝▚▄▞▘   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../Libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_check_base(char *base);
int		ft_printf(const char *str, ...);

void	ft_putchar(char c, int *total_length);
void	ft_putstr(char *str, int *total_length);
void	ft_string_format(va_list args, int *total_length, int space, int x);
void	ft_integer_format(int *total_length, int i_converted);
void	ft_unsigned_format(va_list args, int *total_length);
void	ft_pointer_format(va_list args, int *total_length);
void	ft_hex_format(char c, int *total_length, unsigned int u_converted);
void	ft_putnbr(int nbr, int *total_length);
void	ft_putunbr_base(unsigned int nbr, char *base, int *total_length);
void	ft_putlnbr_base(unsigned long nbr, char *base, int *total_length);
void	ft_router(va_list va, const char *str, int *total_length);
void	ft_bonus_dash(va_list va, const char *str, int *total_length);
void	ft_init_zero(int *x, int *y);
#endif
