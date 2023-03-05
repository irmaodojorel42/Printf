/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:05:22 by marvin            #+#    #+#             */
/*   Updated: 2023/03/05 20:05:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_print_alphabet(void)
{
    char    c;

    c = 97;
    while (c >= 97 && c <= 122)
    {
        write(1, &c, 1);
        c++;
    }
    write(1, "\n", 1);
}

/*int main(void)
{
    ft_print_alphabet();
    return (0);
}*/