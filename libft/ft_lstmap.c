/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:13:14 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:15:18 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Iterates the list ’lst’ and applies the function ’f’ to the content of 
 * each element. Creates a new list resulting of the successive applications 
 * of the function ’f’. The ’del’ function is used to delete the content of 
 * an element if needed.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newer;

	if (!f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newer = ft_lstnew (f(lst->content));
		if (!newer)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newer);
		lst = lst->next;
	}
	return (newlst);
}
