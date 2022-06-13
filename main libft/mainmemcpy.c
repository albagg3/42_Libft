/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmemcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:02:37 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/17 16:05:44 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	const char		src[] = "Hola";
	 char	dst[] = "Bienvenido";
	size_t n;
	

	n = 3;
	
	ft_memcpy(dst, src, n);
printf("mi funcion resultado: \n%s", dst);
// memcpy (dst, src, n);
//puts(dst);
//	printf("memcpy resultado: \n%s", memcpy (dst, src, n));
			return(0);



}
