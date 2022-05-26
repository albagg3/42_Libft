/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 09:32:31 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/25 17:14:18 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		count;
	int		s1_len;

	count = 0;
	s1_len = ft_strlen(s1);
	while (s1[count] && ft_strchr(set, s1[count] ))
	{
		//printf("Ha entrado en while 1\n");
		count++;
	}
	while (*s1 && ft_strchr(set, s1[s1_len - 1]))
	{
		//printf("Ha entrado en while 2\n");
		s1_len--;
	}
	//printf("Haces algo?\n");
	new = ft_substr(s1, count, (s1_len  - count));
	return (new);
}

