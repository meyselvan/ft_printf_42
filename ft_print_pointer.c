/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relvan <relvan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:15:56 by relvan            #+#    #+#             */
/*   Updated: 2023/08/09 14:47:51 by relvan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(unsigned long long pointer)
{
	char	*base;
	int		len;

	len = 2;
	base = "0123456789abcdef";
	len += ft_unsignedlen(pointer, 16);
	if (pointer < 16)
	{
		ft_putchar_fd(base[pointer], 1);
	}
	if (pointer >= 16)
	{
		ft_print_pointer(pointer / 16);
		ft_print_pointer(pointer % 16);
	}
	return (len);
}
