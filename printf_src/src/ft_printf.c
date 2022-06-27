/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 10:13:35 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/27 18:31:15 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libprintf.h"

int	 ft_identify_format(va_list arg, char c)
{
	if (c == 'c')
		return (ft_print_character(va_arg(arg, int)));
	if (c == 's')
		return (ft_print_string(va_arg(arg, char *)));
	if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(arg, int)));
	if (c == 'u')
		return (ft_putnbr(va_arg(arg, unsigned int)));
	if (c == 'x')
		return (ft_hexa_lower(va_arg(arg, int)));
	if (c == 'X')
		return (ft_hexa_upper(va_arg(arg, int)));
	if (c == '%')
		return (ft_putchar('%'));
	if (c == 'p')
		return (ft_pointer(va_arg(arg, unsigned long long)));
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
