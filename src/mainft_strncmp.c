/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_strncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 11:35:29 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/20 11:52:27 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>


int	main ()
{
	char *s1 = "hola";
	char *s2 = "hello";
	int	n;
	int result;

	n = 3;
	
//	result = strncmp(s1, s2, n);
	result = ft_strncmp(s1, s2, n);
	printf("El resultado es: %d\n", result);
}
