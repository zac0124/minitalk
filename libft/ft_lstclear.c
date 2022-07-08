/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:05:59 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:08:58 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Deletes and frees the given element and every successor of that element, 
 *  using the function ’del’ and free(3). 
 *  Finally, the pointer to the list must be set to NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && del)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
	}
	*lst = NULL;
}
