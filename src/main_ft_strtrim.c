/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:31:52 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/25 18:25:55 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int main()
{
	char *s1 = "42hola42";
	char *set = "42";
	char *result;

	result = ft_strtrim(s1, set);

	printf("El resultado de strtrim es:%s", result);
	return (0);
}
