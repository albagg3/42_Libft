/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:14:30 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/26 10:09:01 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//1 contar palabras

char **ft_split(char const *s, char c)
{
	int	count;
	int	n_word;

	count = 0;
	n_word = 0;
	while (s[count])
	{
		if (count == 0 && s[count] != c)
			n_word++;
		else if (s[count] == c)
		{
			printf("ha entrado\n");
			n_word++;
		}
		count++;
	}
	printf("El numero de letras es: %d\n",count);
	printf("El numero de palabras es: %d\n",n_word);
	return(0);
}
