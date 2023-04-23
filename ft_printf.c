/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:27:06 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/23 22:27:06 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_formatype(char type, va_list args)
{
	int	c;

	c = 0;
	if (type == '%')
		c += ft_putchar('%');
	else if (type == 'd' || type == 'i')
		c += ft_putnbr(va_arg(args, int));
	else if (type == 'c')
		c += ft_putchar(va_arg(args, int));
	else if (type == 's')
		c += ft_putstr(va_arg(args, char *));
	else if (type == 'x' || type == 'X')
		c += ft_hexadec(va_arg(args, unsigned int), type);
	else if (type == 'u')
		c += ft_uint(va_arg(args, unsigned int));
	else if (type == 'p')
		c += ft_check(va_arg(args, unsigned long int), 'p');
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
