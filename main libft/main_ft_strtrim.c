/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strtrim.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 16:31:52 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/26 16:29:26 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int main()
{
	char *s1 = "444242hola4442";
	char *set = "42";
	char *result;

	result = ft_strtrim(s1, set);

	printf("El resultado de strtrim es:%s", result);
	return (0);
}
