/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marcarva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:56:01 by marcarva          #+#    #+#             */
/*   Updated: 2022/10/31 16:07:14 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_count_size(int n)
{
	int	size;
	int	aux;

	if (n < 0)
		size = 2;
	else
		size = 1;
	aux = n / 10;
	while (aux)
	{
		aux = aux / 10;
		size++;
	}
	return (size);
}

int	ft_print_nbr(int n)
{
	if (n == -2147483648)
	{
		ft_print_char('-');
		ft_print_char('2');
		ft_print_nbr(147483648);
	}
	else if (n < 0)
	{
		ft_print_char('-');
		ft_print_nbr(-1 * n);
	}
	else if (n >= 0 && n <= 9)
		ft_print_char((n + 48));
	else
	{
		ft_print_nbr(n / 10);
		ft_print_char(((n % 10) + 48));
	}
	return (ft_count_size(n));
}

int	ft_print_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n <= 9)
		len += ft_print_char((n + 48));
	else
	{
		len += ft_print_unsigned(n / 10);
		len += ft_print_char(((n % 10) + 48));
	}
	return (len);
}
