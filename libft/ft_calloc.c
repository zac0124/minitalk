/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmunkhja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:33:19 by zmunkhja          #+#    #+#             */
/*   Updated: 2022/02/22 14:26:32 by zmunkhja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The C library function allocates the requested memory and 
returns a pointer to it. The difference in malloc and calloc is that 
malloc does not set the memory to zero where as calloc sets allocated memory 
to zero. 
Parameters

    count − This is the number of elements to be allocated.

    size − This is the size of elements.

Return Value

This function returns a pointer to the allocated memory, or 
NULL if the request fails.*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	else
		ft_bzero(ptr, size * count);
	return (ptr);
}
