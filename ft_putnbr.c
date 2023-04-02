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

#include "libprintf.h"

void    ft_putnbr(int c)
{
    if(c == -2147483648)
    {
        write(1, "-2147483648", 12);
        return;
    }
    else if(c < 0)
    {
        ft_putchar('-');
        ft_putnbr(-c);
    }
    else if(c > 9)
    {
        ft_putnbr(c / 10);
        ft_putnbr(c % 10);
    }
    else
        ft_putchar(c + '0');
}