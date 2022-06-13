/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 11:21:10 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/31 12:25:05 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char	*result;
	int		n;
	
	n = 2147483647;
	result = ft_itoa(n);

	printf("el string result es:  %s", result);

	return (0);
}
