/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 09:24:34 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/30 12:26:55 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include<stdlib.h>

int	main()
{
	char	*str = " 24";
	int	result;


//	result = atoi(str);
	result = ft_atoi(str);
	printf("atoi function: %d", result);


}
