/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_s_p.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 13:23:32 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/27 13:18:29 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libprintf.h"

int	ft_print_character(int n)
{
	ft_putchar(n);
	return (1);
}

int	ft_print_string(char *str)
{
	return (ft_putstr(str));
}

