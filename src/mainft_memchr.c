/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainft_memchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 15:51:01 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/20 16:39:31 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	main()
{
	char	*s = "abcdefg";
	int		c;
	size_t	n;
	char *result;
	c = 'c';
	n = 5;

	result = ft_memchr(s, c, n);		
//	result = memchr(s, c, n);
	printf("El return de la funcion es: %c",*result);
}
