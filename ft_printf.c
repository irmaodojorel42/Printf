/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 14:49:45 by marvin            #+#    #+#             */
/*   Updated: 2023/04/09 14:49:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formatype(char type, va_list args)
{
	int	c;

	c = 0;
	if (type == '%')
		c += ft_putchar('%');
	if (type == 'd' || type == 'i')
		c += ft_putnbr(va_arg(args, int));
	if (type == 'c')
		c += ft_putchar(va_arg(args, int));
	if (type == 's')
		c += ft_putstr(va_arg(args, char *));
	if (type == 'x' || type == 'X')
		c += ft_hexadec(va_arg(args, unsigned int), type);
	if (type == 'u')
		c += ft_uint(va_arg(args, unsigned int));
	if (type == 'p')
	{
		c += ft_putstr("0x");
		c += ft_hexadec(va_arg(args, unsigned long int), 'p');
	}
	return (c);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			c;
	int			i;

	i = -1;
	c = 0;
	va_start(args, format);
	while (format[++i])
	{
		if (format[i] == '%')
		{
			c += ft_formatype(format[++i], args);
			continue ;
		}
		c += ft_putchar(format[i]);
	}
	return (c);
}
