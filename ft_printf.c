/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marcarva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:56:14 by marcarva          #+#    #+#             */
/*   Updated: 2022/10/27 17:35:03 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int	len;
	va_list	args;

	va_start(args, format);
	len = 0;
	len += ft_printing((char *)format, args);
	va_end(args);
	return (len);
}

int	ft_printing(char *format, va_list args)
{
	int	i; //percorrer o argumento fixo (string) format
	int len_str; //tamanho do que foi impresso

	i = 0;
	len_str = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len_str += ft_check_format(format, args, i);
		}
		else
			len_str += write(1, &format[i], 1);
		i++;
	}
	return (len_str);
}

int ft_check_format(char *format, va_list args, int i)
{
	int len_fmt;

	len_fmt = 0;
	if (format[i] == 'c')
		len_fmt = ft_putchar(va_arg(args, int));
	if (format[i] == 's')
		len_fmt = ft_putstr(va_arg(args, char *));
	if (format[i] == '%')
		len_fmt = ft_putchar('%');
	if (format[i] == 'd' || format[i] == 'i')
		len_fmt = ft_putnbr(va_arg(args, int));
	if (format[i] == 'u')
		len_fmt = ft_putnbr_unsigned(va_arg(args, unsigned int));
	/*if (format[i] == 'x')
		len_fmt = ft_put_hexa_lower(va_arg(args, char *));
	if (format[i] == 'X')
		len_fmt = ft_put_hexa_upper(va_arg(args, char *));
	if (format[i] == 'p')
		len_fmt = ft_put_pointer(va_arg(args, char *));*/
	return (len_fmt);
}

/*
int main(void)
{
	char			*text = "Hoje é um bom dia!";
	int				nbr = 27;
	unsigned int	n = -27;

	printf("\n");

	printf("\n** Character format specifier : %c **\n");

	printf("Resultado esperado: ");
	printf("%c", text[0]);
	printf("\n");
	ft_printf("Resultado real: ");
	ft_printf("%c", text[0]);

	ft_printf("\n");

	printf("\n** String printing: %s **\n");

	printf("Resultado esperado: ");
	printf("%s", text);
	printf("\n");
	ft_printf("Resultado real: ");
	ft_printf("%s", text);

	ft_printf("\n");

	printf("\n** Print %% **\n");

	printf("Resultado esperado: ");
	printf("%%");
	printf("\n");
	ft_printf("Resultado real: ");
	ft_printf("%%");

	ft_printf("\n");

	printf("\n** Signed Integer format specifier : %d, %i **\n");
	printf("Resultado esperado: ");
	printf("Valor: %d e Valor: %i", nbr, n);
	printf("\n");
	ft_printf("Resultado real: ");
	ft_printf("Valor: %d e Valor: %i", nbr, n);

	// Unsigned Integer Format Specifier: %u:
	printf("Resultado esperado: ");
	printf("%u", n);
	printf("\n");
	ft_printf("Resultado real: ");
	ft_printf("%u", n);

	ft_printf("\n");

	// Unsigned Hexadecimal for integer: %x, %X
	printf("Resultado esperado: ");
	printf("%x", n);
	printf("\n");
	ft_printf("Resultado real: ");
	ft_printf("%x", n);

	ft_printf("\n");

	// Address Printing: %p
	printf("Resultado esperado: ");
	printf("%p", text);
	printf("\n");
	ft_printf("Resultado real: ");
	ft_printf("%p", text);

	ft_printf("\n");
}
*/

