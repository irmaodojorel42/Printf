/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 18:57:55 by marvin            #+#    #+#             */
/*   Updated: 2023/03/06 18:57:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    print(char c)
{
    write(1, &c, 1);
}

void    mod(int a, int b)
{
    print(a / 10 + '0');
    print(a % 10 + '0');
    print(' ');
    print(b / 10 + '0');
    print(b % 10 + '0');
    if (a != 98)
        write(1, ", ", 2);
}

void    ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a >= 0 && a <= 98)
    {
        b = a + 1;
        while (b >= 1 && b <= 99)
        {
            mod(a, b);
            b++;
        }
        a++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    ft_print_comb2();
    return (0);
}