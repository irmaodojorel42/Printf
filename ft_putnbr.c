/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:27:33 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/23 22:27:33 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	c;

	c = 0;
	if (n == -2147483648)
	{
		c += ft_putstr("-2147483648");
		return (c);
	}
	if (n < 0)
	{
		c += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		c += ft_putnbr(n / 10);
		c += ft_putnbr(n % 10);
	}
	else
		c += ft_putchar(n + '0');
	return (c);
}
