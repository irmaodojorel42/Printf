/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:27:42 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/23 22:27:42 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	c;

	c = 0;
	i = -1;
	if (!s)
		c += ft_putstr("(null)");
	else
	{
		while (s[++i])
			c += ft_putchar(s[i]);
	}
	return (c);
}
