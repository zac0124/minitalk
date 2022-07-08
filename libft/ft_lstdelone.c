/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:09:13 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:11:24 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Takes as a parameter an element and frees the memory of 
 *  the element’s content using the function ’del’ given as 
 *  a parameter and free the element. 
 *  The memory of ’next’ must not be freed. */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
