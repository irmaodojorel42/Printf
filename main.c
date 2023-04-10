/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 21:05:18 by marvin            #+#    #+#             */
/*   Updated: 2023/04/02 21:05:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*p;
	int		c;

	p = "irmao do jorel 42";
	ft_printf("result %%c: %c\n", 'A');
	c = ft_printf("result %%s: %s\n", p);
	ft_printf("meu result %%p: %p\n", p);
	ft_printf("result return: %d\n", c);
	ft_printf("result %%i: %i\n", 42);
	ft_printf("result %%u: %u\n", 42);
	ft_printf("result %%x: %x\n", 0);
	ft_printf("result %%X: %X\n", 0);
	ft_printf("result %%%%: %%\n");
	return (0);
}
