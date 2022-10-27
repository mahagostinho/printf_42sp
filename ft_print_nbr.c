/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marcarva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:56:01 by marcarva          #+#    #+#             */
/*   Updated: 2022/10/27 17:28:55 by marcarva         ###   ########.fr       */
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
	while(aux)
	{
		aux = aux / 10;
		size++;
	}
	return (size);
}

int	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1 * n);
	}
	else if (n >= 0 && n <= 9)
		ft_putchar((n + 48));
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(((n % 10) + 48));
	}
	return (ft_count_size(n));
}

int	ft_putnbr_unsigned(unsigned int n)
{
	if (n >= 0)
	{
		if (n >= 0 && n <= 9)
			ft_putchar((n + 48));
		else
		{
			ft_putnbr(n / 10);
			ft_putchar(((n % 10) + 48));
		}
		return (ft_count_size((int) n));
	}
	else
		return (0);
}
