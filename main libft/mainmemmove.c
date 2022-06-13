/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 11:50:28 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/17 18:29:30 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int	main	(void)
{
	char dst[] = "Bienvenido";
	const char src[] = "Hola";
	size_t len;
	char dst1[] = "Bienvenido";
	const char src1[] = "Hola";
	size_t len1;

	len = 3;
	len1 = 3;
	ft_memmove(dst1, src1, len1);
	puts (dst1);
	memmove(dst,src,len);
	puts (dst);
	return (0);
}

