/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:13:35 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/16 17:21:42 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libprintf.h"

int	 ft_identify_format(va_list arg, char c)
{
	if (c == 'c')
		return (ft_print_character(arg));
	if (c == 's')
		return(ft_print_string(arg));
	if (c == 'p')
		return(ft_print_pointer(arg));
	return (0);

}


int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int i;
	int len;

	i = 0;
	len = 0;
	va_start (arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			len +=	ft_identify_format(arg, str[i + 1]);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end (arg);
	return (len);
}
