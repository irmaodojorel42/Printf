/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 20:27:42 by marvin            #+#    #+#             */
/*   Updated: 2023/04/02 20:27:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int    ft_putnbr(int n)
{
    int c;

    c = 0;
    if(n == -2147483648)
    {
        c += ft_putstr("-2147483648");
        return(c);
    }
    else if(n < 0)
    {
        c += ft_putchar('-');
        ft_putnbr(-n);
    }
    else if(n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
    else
        c += ft_putchar(n + '0');
}