/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_s_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:23:32 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/16 17:21:39 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libprintf.h"

int	ft_print_character(va_list arg)
{
	int new;

	new = va_arg(arg, int);
//	printf("%c", va_arg(arg, int));
	ft_putchar(new);
	return (1);
}

int	ft_print_string(va_list arg)
{
	char	*new;

	new = va_arg(arg, char *);
	return (ft_putstr(new));
}

int	ft_print_pointer(va_list arg)
{
	void	*new;

	new = va_arg(arg, void	*);


}
