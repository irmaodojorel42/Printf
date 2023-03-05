/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:33:28 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 20:33:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_numbers(void)
{
    char    a;

    a = 48;
    while (a >= 48 && a <= 57)
    {
        write(1, &a, 1);
        a++;
    }
    write(1, "\n", 1);
}

/*int main(void)
{
    ft_print_numbers();
    return (0);
}*/