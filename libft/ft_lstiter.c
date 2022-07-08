/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:11:37 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:12:37 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*  Iterates the list ’lst’ and applies the function ’f’ to the content of 
 *  each element. */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (lst && f)
	{
		while (lst)
		{
			tmp = lst->next;
			f(lst->content);
			lst = tmp;
		}
	}
}
