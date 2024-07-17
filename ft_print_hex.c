/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relvan <relvan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:16:02 by relvan            #+#    #+#             */
/*   Updated: 2023/08/09 14:46:16 by relvan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(int number, int base)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		len++;
	while (number != 0)
	{
		number /= base;
		len++;
	}
	return (len);
}

void	ft_puthex(unsigned int number, const char format)
{
	char	*x_base;
	char	*xup_base;

	x_base = "0123456789abcdef";
	xup_base = "0123456789ABCDEF";
	if (number < 16)
	{
		if (format == 'x')
			ft_putchar_fd(x_base[number], 1);
		if (format == 'X')
			ft_putchar_fd(xup_base[number], 1);
	}
	if (number >= 16)
	{
		ft_puthex(number / 16, format);
		ft_puthex(number % 16, format);
	}
}

int	ft_print_hex(unsigned int number, const char format)
{
	int		len;

	len = 0;
	if (number == 0)
		write(1, "0", 1);
	else
		ft_puthex(number, format);
	len += ft_unsignedlen(number, 16);
	return (len);
}
