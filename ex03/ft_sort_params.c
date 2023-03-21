/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:03:56 by marvin            #+#    #+#             */
/*   Updated: 2023/03/22 14:03:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int comp(char *av1, char *av2)
{
    int i;

    i = 0;
    while(av1[i] != '\0' && av2[i] != '\0')
    {
        if(av1[i] > av2[i])
            return(0);
        else if(av1[i] < av2[i])
            return(1);
        else
            i++;
    }
    return(1);
}

int print(char *av, int j)
{
    int i;

    i = 0;
    while (av[i] != '\0')
    {
        write(1, &av[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(j + 1);
}

int main(int ac, char **av)
{
    int j;
    char    *temp;

    j = 1;
    if(ac == 1)
        return(0);
    while(j < ac - 1)
    {
        if(comp(av[j], av[j + 1]))
            j++;
        else
        {
            temp = av[j];
            av[j] = av[j + 1];
            av[j + 1] = temp;
            j = 1;
        }
    }
    j = 1;
    while (j < ac)
        j = print(av[j], j);
    return(0);
}