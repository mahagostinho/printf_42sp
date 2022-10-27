/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcarva <marcarva@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:05:53 by marcarva          #+#    #+#             */
/*   Updated: 2022/10/27 17:30:48 by marcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*name = "Marcella";
	int		number = -27;
	int		unsign_number = 27;

	//sem especificador de formato
	printf("Hoje vai ser um dia bom!\n");
	// %c imprime char
	printf("Imprimir um caractere: %c\n", name[0]); //se char não existe seg fault
	// %s imprime string
	printf("%s\n", name);
	// %d imprime signed decimal integer
	printf("%d\n", number);
	// %i imprime signed decimal integer
	printf("%i\n", number);
	// %u imprime unsigned decimal integer
	printf("%u\n", unsign_number);
	// %x imprime unsigned hexadecimal integer abcdef
	printf("%x\n", unsign_number);
	// %X imprime unsigned hexadecimal integer ABCDEF
	printf("%X\n", unsign_number);
	// %p pointer type imprime um endereço em hexadecimal minúsculo iniciando com 0x
	printf("%p\n", name);
}

// checar o retorno da printf
// checar os casos de erro
