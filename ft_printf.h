/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marcarva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:56:18 by marcarva          #+#    #+#             */
/*   Updated: 2022/10/27 17:24:55 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h> //RETIRAR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int     ft_printf(const char *format, ...);
int     ft_printing(char *format, va_list args);
int ft_check_format(char *format, va_list args, int i);
int     ft_putchar(char c);
int     ft_putstr(char *s);
int     ft_putnbr(int n);
int     ft_count_size(int n);
int     ft_putnbr_unsigned(unsigned int n);
//int   ft_put_hexa_lower(va_arg(args, char *));
//int   ft_put_hexa_upper(va_arg(args, char *));
//int   ft_put_pointer(va_arg(args, char *));

#endif
~
~
~
~
~
~
