/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 21:04:03 by marvin            #+#    #+#             */
/*   Updated: 2023/04/02 21:04:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

/************INCLUDES************/

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/************FUNCTIONS************/

int ft_putnbr(int c);
int ft_putchar(char c);
int ft_putstr(char *s);
int ft_uint(unsigned int n);
int ft_hexadec(unsigned long n, int x);
int ft_printf(const char *format, ...);

#endif