/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_s_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:23:32 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/29 09:10:02 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_character(int n)
{
	if (ft_putchar(n) == -1)
		return (-1);
	return (1);
}

int	ft_print_string(char *str)
{
	return (ft_putstr(str));
}