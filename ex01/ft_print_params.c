/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:48:08 by marvin            #+#    #+#             */
/*   Updated: 2023/03/22 13:48:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    j = 1;
    if(ac == 1)
        return(0);
    while (j < ac)
    {
        while (av[j][i] != '\0')
        {
            write(1, &av[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
        i = 0;
    }
    return(0);
}