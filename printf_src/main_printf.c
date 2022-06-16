/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 16:44:27 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/16 17:21:47 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/libprintf.h"

int main () 
{
	char *s = "Bienvenido";
	int	result;
	int result1;
	char *p;

	result = printf("hola %c %s\n %p\n", 'A', s, &p);
	printf("result:%i\n", result);
	result1 = ft_printf("hola %c %s\n", 'A', s);
	printf("result1:%i\n",  result1);
}
