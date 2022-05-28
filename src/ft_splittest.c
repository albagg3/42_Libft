/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splittest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 13:14:30 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/28 17:40:12 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_splittest(char const *s, char c)
{
	int count;
	int n_word;
	char ** result;
	int start;

	count = 0;
	n_word = 0;
	start = 0;
	while (s[count])
	{
		if (s[count] != c && (s[count + 1] == c || s[count + 1] == '\0'))
			n_word++;
		count++;
	}
	result = malloc(sizeof(char *) * (n_word +1));
	if (!result)
		return (0);
	count = 0;
	n_word= 0;
	while (s[count])
	{
		if (count == 0 && s[count] != c)
			start = count;
		if (count > 0 && (s[count] != c && s[count-1] == c))
			start = count;
		if (s[count] != c && (s[count + 1] == c || s[count + 1] == '\0'))
		{
			result[n_word] = ft_substr(s, start, count - start + 1);
			n_word++;
		}
		count++;
	
	}
	result[n_word] = NULL;
	return (result);

}
