/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceribeir <ceribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 22:27:16 by ceribeir          #+#    #+#             */
/*   Updated: 2023/04/23 22:27:16 by ceribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/************INCLUDES************/

# include <unistd.h>
# include <stdarg.h>

/************FUNCTIONS************/

int	ft_putnbr(int c);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_uint(unsigned int n);
int	ft_hexadec(unsigned long n, int x);
int	ft_printf(const char *format, ...);
int	ft_check(unsigned long int n, int type);

#endif
