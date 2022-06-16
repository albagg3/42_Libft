/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfunctio.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:44:32 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/16 16:38:48 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libprintf.h"

int	ft_putchar(char c)
{
	return(write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	len;
	len = 0;
	if (!s)
		if (write(1, "(null)", 6) != 6)
			return (-1);
	while (s[len] != '\0')
	{
		ft_putchar(s[len]);
		len++;
  	}
	return (len);
}
