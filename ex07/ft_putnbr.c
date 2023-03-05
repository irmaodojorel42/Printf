/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 22:27:22 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 22:27:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        print('-');
        print('2');
        ft_putnbr(147483648);
    }
    else if (nb < 0)
    {
        print('-');
        ft_putnbr(-nb);
    }
    else if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else if (nb >= 0 && nb <= 9)
        print(nb + '0');
}

/*int main(void)
{
    ft_putnbr(-4564);
    write(1, "\n", 1);
    return (0);
}*/