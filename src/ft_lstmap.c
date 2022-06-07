/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:51:44 by albagarc          #+#    #+#             */
/*   Updated: 2022/06/07 18:39:52 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;puntero a mi primer elemento de la lista nueva
	t_list	*new_element; nuevo elemento que voy iterando y ya tiene funcion aplicada 
	void	*content_new que meto en el new element, content = f(con

	if (!lst)
		return NULL;
		content_new = f(lst ->content)
ft_lstnew:  me crea un elemento nuevo con el content que al que ya he aplicado la funcion dentro
	while (lst)
		if (!f(new_element -> content))
		{
			
		}


	return (new_list);


}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	void	*new_content;

	new_list = NULL;
	if(!lst)
		return NULL;
	while(lst)
	{
		new_content = f(lst -> content);
		new_element = ft_lstnew(new_content);
		if(!new_element)
		{
			if(new_content)
				free(new_content);
			ft_lstclear(&new_list, del);
		}
		ft_lstadd_back(&new_list, new_element);
		lst = lst -> next;
	}
	return(new_list);
}


