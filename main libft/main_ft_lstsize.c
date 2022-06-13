/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 18:10:03 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/05 19:12:25 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
int	main()
{
	int	*nodo1;
	int	*nodo2;
	int	*nodo3;
	struct s_list	*next1;

	int	result;

	next1 = nodo1;
	nodo1 = 3;
	nodo2 = 4;
	nodo3 = 5;

	result = ft_lstsize(nodo1);
	printf("numero de elementos de la lista:%d\n", result);
}
