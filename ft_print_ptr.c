/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marcarva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:21:30 by marcarva          #+#    #+#             */
/*   Updated: 2022/11/07 12:21:17 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int					printed;
	unsigned long long	address;

	address = (unsigned long long)ptr;
	printed = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	printed += write(1, "0x", 2);
	printed += ft_print_hexa_long(address);
	return (printed);
}
