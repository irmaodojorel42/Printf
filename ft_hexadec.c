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

int ft_hexadec(unsigned long int n, int x)
{
    char    *p;
    int c;

    c = 0;
    if (n == 0 && x != 'p')
		c += ft_putchar('0');
    if(x == 'x' || x == 'p')
        p = "0123456789abcdef";
    if(x == 'X')
        p = "0123456789ABCDEF";
    if(n >= 16)
    {
        c += ft_hexadec(n / 16, x);
        c += ft_hexadec(n % 16, x);
    }
    else
        c += ft_putchar(p[n]);
    return(c);
}