/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:10:27 by marvin            #+#    #+#             */
/*   Updated: 2023/03/22 15:10:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(s1[i] != '\0' && i < n)
    {
        if(s1[i] == s2[i])
            i++;
        else
            return(s1[i] - s2[i]);
    }
    return(0);
}

/*#include <stdio.h>

int main(void)
{
    char    *s1 = "abCd";
    char    *s2 = "abcd";

    printf("%d\n", ft_strncmp(s1, s2, 3));
    printf("%d\n", ft_strncmp(s2, s1, 3));
    printf("%d\n", ft_strncmp(s1, s2, 2));
    return(0);
}*/