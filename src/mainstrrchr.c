/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:21:01 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/19 17:26:42 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	main	(void)
{
	char s[] = "Bienvenido";
	char c;

	c = 'e';
	ft_strrchr(s, c);
	printf("El resultado es:%s",s);
	
}
