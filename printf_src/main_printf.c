/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:44:27 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/27 18:31:03 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libprintf.h"

int main () 
{
	char *s = "Bienvenido";
	int	result;
	int result1;
	int	n = 123;
	int *ptr;
	int p;

	ptr = &p;

	p = 5;


	result = printf("hola %c %s %x %X %i %d %u %% %p\n", 'A', s, n, n, -55, -1266, -1, ptr);
	printf("result:%i\n", result);
	result1 = ft_printf("hola %c %s %x %X %i %d %u %% %p\n", 'A', s, n, n, -55, -1266, -1, ptr);
	printf("result1:%i\n", result1);
}
