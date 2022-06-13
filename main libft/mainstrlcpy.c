/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainstrlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:17:41 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/17 18:29:36 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	main (void)
{
	char		dst[] = "Bienvenido"
	const char	src[] = "hola"
	size_t dstsize;

	dstsize = 3;
	strlcpy(dst, src, dstsize);

	return (0);
	
}
