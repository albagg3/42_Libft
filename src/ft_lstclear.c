/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 15:13:13 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/06 16:17:22 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	while (*lst != NULL)
	{
	//	(del)(*lst);
		
	//	free (*lst);
	//	lst++;
		ft_lstdelone(lst,  &del(*lst));
	}
//	free(*lst);
	*lst = NULL;
}
