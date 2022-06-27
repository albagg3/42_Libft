/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 10:14:02 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/27 18:31:12 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libprintf.h"

int	ft_hexa_lower(unsigned long long n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_hexa_lower(n / 16);
	ft_putchar(base[n % 16]);
	return(ft_hexa_len(n));
}

int	ft_hexa_upper(unsigned long long n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
		ft_hexa_lower(n / 16);
	ft_putchar(base[n % 16]);
	return(ft_hexa_len(n));
}

int	ft_hexa_len(unsigned long long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len ++;
		n = n / 16;
	}
	return (len);
}

int ft_pointer(unsigned long long n)
{
//	if (write(1, "0x", 2) != 2)
//		return (-1);
	return (write(1, "0x", 2) + ft_hexa_lower(n));
}
