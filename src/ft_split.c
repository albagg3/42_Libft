/* ************************************************************************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:14:30 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/28 19:35:28 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char	const *s, char c)
{
	int count;
	int n_word;

	count = 0;
	n_word = 0;
	while (s[count])
	{
		printf("se mete en count_Words %d\n",n_word);
		if (s[count] != c && ((s[count + 1] == c) || s[count + 1] == '\0'))
			n_word++;
		count++;
	}
	return (n_word);
}


char	**ft_malloc_free(const char *s,char c)
{
	char **result;
	int n_word;
	printf("estamos en malloc function\n");

	n_word = ft_count_words(s, c);
	result = malloc(sizeof (char *) * (n_word + 1));
	printf("estamos despues del malloc\n");
	if (!result)
	{
		while (n_word - 1 > 0)
		{
			free(result);
			n_word--;
		}
		return(0);
	}
	return(result);
}

char	**ft_findposition_cutstring(char	const *s, char c)
{
	int count;
	int n_word;
	int start;
	char **result;

	count = 0;
	n_word = 0;
	printf("estamos en ft_find position\n");
	while(s[count])
	{	
		printf("se mete en el while de find_position\n");
		if(count == 0 && s[count] != c)
			start = count;
		if(count > 0 && s[count] != c && s[count -1] == c)
			start = count;
		if (s[count] != c && ((s[count + 1] == c) || s[count + 1] == '\0'))
		{
			result[n_word] = ft_substr(s, start, count - start + 1);
			n_word++;
		}
		count++;
	}
	printf("estamos fuera del while\n");
	result[n_word] = NULL;
	printf("ponemos el null en buena posicion\n");
	return (result);
}

char **ft_split(char const *s, char c)
{
	char **result;
	
	result = ft_malloc_free(s,c);
	printf("antes\n");
	result = ft_findposition_cutstring(s,c);
	printf("despues valor de result 0: %s\n", result[0]);
	return(result);
}
