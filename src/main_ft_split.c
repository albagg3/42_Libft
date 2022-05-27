/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:26:10 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/27 16:17:47 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char *s = "Hola que tal ";
	char c;
	char **result;
	int count;
	c = ' ';
	count = 0;
	result = ft_split(s, c);
	while(result[count]){
		printf("|%s|", result[count]);
		count++;
	}

	return(0);
}
