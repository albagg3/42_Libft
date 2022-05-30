/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 10:36:25 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/30 15:24:09 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	if(n < 0)
	{
		len = 1;
		while (n)
		{
			n = n / 10;
			len++;
		}
	}
	if (n > 0)
	{
		len = 0;
		while (n > 0)
		{
			n = n / 10;
			len++;
		}
	}
	return (len);
}




char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		fixlen;

	len = ft_len(n);
	fixlen = len;
//	printf("len vale:%d\nvalor de n:%d\n", len, n);
	result = malloc(sizeof(char) * len + 1);
	if(!result)
		return (0);
	if (n < 0)
	{
		*result = '-';
		n = - n;
//		printf("valor de n:%d\n", n);
	}
	
	while (n > 0 && len - 1 >= 0)
		{
			result[len - 1] = n % 10 + '0';
			len --;
			n = n / 10;
//			printf("lo que hay en result:%c\n", result[len]);
		}
	result[fixlen] = '\0';



	return (result);
}

