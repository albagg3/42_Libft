/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strjoin.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 08:51:33 by albagarc          #+#    #+#             */
/*   Updated: 2022/05/25 12:20:46 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char *s1 = "";
	char *s2 = "hola";

	ft_strjoin(s1,s2);

	printf("string resultante:%s", ft_strjoin(s1,s2));


}
