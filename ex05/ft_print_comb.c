/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 21:05:11 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 21:05:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c, char d, char u)
{
    write(1, &c, 1);
    write(1, &d, 1);
    write(1, &u, 1);
}

void    ft_print_comb(void)
{
    char    u;
    char    d;
    char    c;

    c = '0';
    while (c <= '7')
    {
        d = c + 1;
        while (d <= '8')
        {
            u = d + 1;
            while (u <= '9')
            {
                ft_putchar(c, d, u);
                if (c != '7')
                    write(1, ", ", 2);
                u++;
            }
            d++;
        }
        c++;
    }
    write(1, "\n", 1);
}

/*int main(void)
{
    ft_print_comb();
    return (0);
}*/