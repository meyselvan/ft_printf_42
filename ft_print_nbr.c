/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relvan <relvan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:15:59 by relvan            #+#    #+#             */
/*   Updated: 2023/08/09 14:47:03 by relvan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int number)
{
	int	len;

	len = 0;
	len = ft_numlen(number, 10);
	if (number == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	else if (number < 0)
	{
		write (1, "-", 1);
		ft_print_nbr(-number);
	}
	else if (number > 9)
	{
		ft_print_nbr(number / 10);
		ft_print_nbr(number % 10);
	}
	else
		ft_putchar_fd(number + 48, 1);
	return (len);
}

int	ft_unsignedlen(unsigned long number, int base)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	while (number != 0)
	{
		number /= base;
		len++;
	}
	return (len);
}

int	ft_print_unsignednbr(unsigned int number)
{
	int	len;

	len = ft_unsignedlen(number, 10);
	if (number > 9)
	{
		ft_print_unsignednbr(number / 10);
		ft_print_unsignednbr(number % 10);
	}
	else
		ft_putchar_fd(number + 48, 1);
	return (len);
}
