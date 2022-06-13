/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_substr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 09:50:26 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/24 15:59:20 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char const *s = "Bienvenidoa42";

	ft_substr(s, 2, 3);
	printf("La cadena resultante:%s", s);
	return (0);
}
