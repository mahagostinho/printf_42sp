/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marcarva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:56:05 by marcarva          #+#    #+#             */
/*   Updated: 2022/10/27 17:28:01 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     ft_putchar(char c)
{
        write(1, &c, 1);
        return (1);
}

int     ft_putstr(char *s)
{
        int     i;

        i = 0;
        if (!s)
                ft_putstr("(null)");
        while (*(s + i))
        {
                write(1, (s + i), 1);
                i++;
        }
        return (i);
}
