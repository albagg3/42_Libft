/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 09:46:53 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/22 16:05:14 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main ()
{
	char	*haystack = "aaaabcde";
	char	*needle = "aabcd";
//	char	*needle = "";

	char	*result;

//	result = strnstr(haystack, needle, 0);
	result = ft_strnstr(haystack, needle, 0);
	printf("El resultado es: %s", result);
}
