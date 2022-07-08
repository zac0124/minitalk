/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:18:13 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/21 14:19:13 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Counts the number of elements in a list.*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		count++;
		lst = lst->next;
	}
	if (lst->next == NULL)
		count++;
	return (count);
}
