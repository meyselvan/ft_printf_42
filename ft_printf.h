/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relvan <relvan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:15:46 by relvan            #+#    #+#             */
/*   Updated: 2023/08/09 14:42:29 by relvan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_checkformat(va_list args, const char format);
int		ft_print_char(int c);
int		ft_print_hex(unsigned int num, const char format);
int		ft_numlen(int number, int base);
int		ft_print_percent(void);
int		ft_print_str(char *str);
int		ft_print_nbr(int number);
int		ft_print_unsignednbr(unsigned int number);
int		ft_print_pointer(unsigned long long pointer);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		ft_unsignedlen(unsigned long number, int base);
#endif