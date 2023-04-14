/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 20:20:14 by marvin            #+#    #+#             */
/*   Updated: 2023/04/09 20:20:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(unsigned long int n, int type)
{	
	int	c;

	c = 0;
	if (!n)
		c += ft_putstr("(nil)");
	else
	{
		c += ft_putstr("0x");
		c += ft_hexadec(n, type);
	}
	return (c);
}

int	ft_hexadec(unsigned long int n, int type)
{
	char	*p;
	int		c;

	c = 0;
	if (type == 'x' || type == 'p')
		p = "0123456789abcdef";
	if (type == 'X')
		p = "0123456789ABCDEF";
	if (n >= 16)
	{
		c += ft_hexadec(n / 16, type);
		c += ft_hexadec(n % 16, type);
	}
	else
		c += ft_putchar(p[n]);
	return (c);
}
